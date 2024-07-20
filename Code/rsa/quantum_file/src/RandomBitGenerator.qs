namespace RandomBitGenerator {

    open Microsoft.Quantum.Convert;

    operation BitGenerator(qubit_len : Int) : Int[] {
        use q = Qubit();
        mutable res = [];
        for i in 0..qubit_len-1{
            H(q);
            set res += [ResultArrayAsInt([M(q)])];
            Reset(q);
        }
        return res;
    }
}
