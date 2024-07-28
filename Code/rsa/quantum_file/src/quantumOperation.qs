namespace QuantumOperation{
    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Canon;
    open Microsoft.Quantum.Measurement;
    open Microsoft.Quantum.Math;
    open Microsoft.Quantum.Convert;
    open Microsoft.Quantum.Arrays;
    open Microsoft.Quantum.Core;
    open Microsoft.Quantum.Diagnostics;
    open Microsoft.Quantum.Logical;

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

    operation QuantumMultiply (a : Int, y : Qubit[]) : Unit is Adj + Ctl {
        let n = Length(y);
        let a_mod = a % (2^n);

        use s = Qubit[n];
        // start |y⟩ |0⟩

        // apply adder by repeating "a" (integer) times
        for r in 0 .. a_mod - 1 {
            QuantumAdd(y, s);
        }
        // now |y⟩ |a y mod N⟩

        // swap first register and second one by tuple
        ApplyToEachCA(SWAP, Zipped(y, s));
        // now |a y mod N⟩ |y⟩

        // reset all s qubits !
        // but it's tricky because we cannot use "Reset()" since here is controlled operator.
        let a_inv = InverseModI(a_mod, 2^n);
        for r in 0 .. a_inv - 1 {
            Adjoint QuantumAdd(y, s);
        }
    
    }

    operation multiplyNumber(a : Int, b: Int[]) : Int[]{
        let len = Length(b);
        use qu = Qubit[len];
        for i in 0..len-1{
            if(b[i]==1) {
                X(qu[i]);
            }
        }
        QuantumMultiply(a, qu);
        mutable result = [];
        for i in 0..len-1{
            let temp = M(qu[i]);
            set result += [ResultArrayAsInt([temp])];
        }
        for i in 0..len-1{
            Reset(qu[i]);
        }
        return result;
    }
    

    // @EntryPoint()
    // operation Main() : Unit{
    //     // No operation
    // }
}