namespace QuantumOperation{
    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Canon;
    open Microsoft.Quantum.Measurement;
    open Microsoft.Quantum.Math;
    open Microsoft.Quantum.Convert;

    operation QFTImpl (qs : Qubit[]) : Unit is Adj + Ctl
    {
        body (...)
        {
            let nQubits = Length(qs);
            
            for i in 0 .. nQubits - 1
            {
                H(qs[i]);
                for j in i + 1 .. nQubits - 1
                {
                    Controlled R1Frac([qs[j]], (1, j - i, qs[i]));
                }
            }
            
            SwapReverseRegister(qs);
        }
    }
    operation QuantumAdd (x : Qubit[], y : Qubit[]) : Unit is Adj + Ctl{
        let n = Length(x);
        QFTImpl(y);
        for i in 0 .. n - 1 {
            for j in 0 .. (n - 1) - i {
                Controlled R1Frac([x[i + j]], (2, j + 1, (y)[(n - 1) - i]));
            }
        }
        Adjoint QFTImpl(y);
    }

    operation subNumber(x : Int[], y : Int[]) : Int[]{
        let n = Length(x);
        use x_q = Qubit[n];
        use y_q = Qubit[n];
        for i in 0..n-1{
            if(x[i] == 1){
                X(x_q[i]);
            }
            if(y[i] == 1){
                X(y_q[i]);
            }
        }
        Adjoint QuantumAdd(x_q, y_q);
        mutable result = [];
        for i in 0..n-1{
            let res = M(y_q[i]);
            set result += [ResultArrayAsInt([res])];
        }

        ResetAll(x_q);
        ResetAll(y_q);
        return result;
    }

    operation addNumber(x : Int[], y : Int[]) : Int[]{
        let n = Length(x);
        use x_q = Qubit[n];
        use y_q = Qubit[n];
        for i in 0..n-1{
            if(x[i] == 1){
                X(x_q[i]);
            }
            if(y[i] == 1){
                X(y_q[i]);
            }
        }
        QuantumAdd(x_q, y_q);
        mutable result = [];
        for i in 0..n-1{
            let res = M(y_q[i]);
            set result += [ResultArrayAsInt([res])];
        }

        ResetAll(x_q);
        ResetAll(y_q);
        return result;
    }

    @EntryPoint()
    operation Main() : Unit{
        // No operation
    }
}