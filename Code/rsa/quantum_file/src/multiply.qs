namespace multiplication{
    open Microsoft.Quantum.Convert;
    open Microsoft.Quantum.Canon;
    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Math;
    operation QAC(qA : Qubit, qB : Qubit, res : Qubit) : Unit{
        let theta = PI()/2.0;
        Controlled Rx([qA], (theta, res));
        CNOT(qB, qA);
        Controlled Rx([qB], (theta, res));
        Controlled Rx([qA], (-theta, res));
        CNOT(qB, qA);
    }

    operation QFA(qA : Qubit, qB : Qubit, qC : Qubit, res : Qubit) : Unit{
        let theta = PI()/2.0;
        Controlled Rx([qB], (theta, res));
        Controlled Rx([qA], (theta, res));
        CNOT(qA, qB);
        Controlled Rx([qC], (theta, res));
        CNOT(qB, qC);
        Controlled Rx([qC], (-theta, res));
    }

    operation multiply(x : Qubit[], y : Qubit[], res : Qubit []) : Unit{
        let n = Length(x);
        use pro = Qubit[n*n];
        mutable k = 0;
        for i in 0..n-1{
            for j in 0..n-1{
                QAC(x[i], y[j], pro[k]);
                set k = k + 1;
            }
        }

        use carry = Qubit[17];
        Controlled X([pro[0]], res[0]);

        QFA(pro[5], pro[1], res[1], carry[0]);

        QFA(pro[6], pro[2], carry[0], carry[1]);
        QFA(carry[10], carry[0], carry[1], carry[2]);
        Controlled X([carry[1]], res[2]);

        QFA(pro[7], pro[3], carry[2], carry[3]);
        QFA(carry[11], carry[2], carry[3], carry[4]);
        QFA(carry[15], carry[3], carry[4], carry[5]);
        Controlled X([carry[4]], res[3]);

        QFA(pro[8], pro[4], carry[5], carry[6]);
        QFA(carry[12], carry[5], carry[6], carry[7]);
        QFA(carry[16], carry[6], carry[7], carry[8]);
        QFA(carry[20], carry[7], carry[8], carry[9]);
        Controlled X([carry[8]], res[4]);

        QFA(pro[9], pro[13], carry[9], carry[10]);
        QFA(carry[17], carry[9], carry[10], carry[11]);
        QFA(carry[21], carry[10], carry[11], carry[12]);
        Controlled X([carry[11]], res[5]);

        QFA(pro[14], pro[18], carry[12], carry[13]);
        QFA(pro[22], carry[12], carry[13], carry[14]);
        Controlled X([carry[13]], res[6]);

        QFA(pro[19], pro[23], carry[14], carry[15]);
        Controlled X([carry[14]], res[7]);

        QFA(pro[24], carry[15], res[8], carry[16]);

        Controlled X([carry[16]], res[9]);
    }

    operation multiplyH(x : Int[], y : Int[]) : Int[]{
        let n = Length(x);
        use qA = Qubit[n];
        use qB = Qubit[n];
        use resQ = Qubit[10];
        for i in 0..n-1{
            if(x[i] == 1){
                X(qA[i]);
            }
            if(y[i] == 1){
                X(qB[i]);
            }
        }
        multiply(qA, qB, resQ);

        mutable res = [];
        for i in 0..9{
            set res += [ResultArrayAsInt([M(resQ[i])])];
        }
        return res;
    }

    @EntryPoint()
    operation QuantumMain() : Unit{
        // let x = [1, 0, 1, 1, 0];
        // let y = [1, 0, 1, 1, 0];
        // let res = multiplyH(x, y);
        // Message($"Result: {res}");
    }
    
}