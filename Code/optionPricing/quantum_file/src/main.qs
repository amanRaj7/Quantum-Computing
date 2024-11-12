namespace optionPricing{
    open Microsoft.Quantum.Convert;
    open Microsoft.Quantum.Canon;
    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Math;
    operation QAC(qA : Qubit, qB : Qubit, qC : Qubit) : Unit{
        Ry(1.43, qA);
        Ry(2.90, qB);

        CNOT(qA, qB);

        Ry(1.47, qC);
        CNOT(qA, qC);
        Ry(-0.10, qC);
        CNOT(qB, qC);
        Ry(0.10, qC);
        CNOT(qA, qC);
        Ry(-0.29, qC);
        CNOT(qB, qC);
    }
    operation qac_operation() : Int{
        use Qubit = Qubit[3];
        let qA = Qubit[0];
        let qB = Qubit[1];
        let qC = Qubit[2];
        QAC(qA, qB, qC);
        let res2 = ResultArrayAsInt([M(qA)]);
        let res1 = ResultArrayAsInt([M(qB)]);
        let res0 = ResultArrayAsInt([M(qC)]);
        let out = 4*res2 + 2*res1 + res0;
        ResetAll(Qubit);
        return out;
    }

@EntryPoint()
    operation QuantumMain() : Unit{
        // let x = [1, 0, 1, 1, 0];
        // let y = [1, 0, 1, 1, 0];
        // let res = multiplyH(x, y);
        // Message($"Result: {res}");
    }
}