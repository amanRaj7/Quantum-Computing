namespace QuantumTeleportation{
    open Microsoft.Quantum.Canon;
    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Convert;

    operation PrepareBell( q1 : Qubit, q2 : Qubit) : Unit{
        // The Bell state preparation : |Phi+> = 1/sqrt(2) * (|00> + |11>)
        H(q1); CNOT(q1, q2);
    }
    
    operation Decode( q1 : Qubit, q2 : Qubit) : Int[]{
        // The Alice measure her qubit and bridge qubit, then send the measurement result to Bob
        CNOT(q1, q2); H(q1);
        let result1 = M(q1);
        let result2 = M(q2);
        let result_int1 = ResultArrayAsInt([result1]);
        let result_int2 = ResultArrayAsInt([result2]);
        return [result_int1, result_int2];
    }

    operation Encode( q1 : Qubit, message : Int[]) : Unit{
        // Bob use the message to recover the original state
        if(message[0]==0){
            if(message[1]==0){
                // no operation
            }
            else{
                X(q1);
            }
        }
        else{
            if(message[1]==0){
                Z(q1);
            }
            else{
                X(q1); Z(q1);
            }
        }
    }

    operation Verify( q1 : Qubit, q2 : Qubit) : Result{
        // Verify the teleportation : |-> --H--> |1>
        H(q2);
        let result2 = M(q2);
        return result2;
    }


    operation Prepare(q1 : Qubit) : Unit{
        // Prepare the qubit to be teleported (Alice's qubit) : |->
        Reset(q1);
        X(q1);
        H(q1);
    }


    @EntryPoint()
    operation QuantumMain() : Result{
        // The main function of quantum teleportation
        // The teleportation of |-> state

        // Qubit initialization
        use AliceQ = Qubit();
        use BridgeQ = Qubit();
        use BobQ = Qubit();
        
        // Prepare the qubit to be teleported
        Prepare(AliceQ);

        // The teleportation process : prepare the Bell state between Bob's qubit and Brdge qubit
        Reset(BridgeQ); Reset(BobQ);
        PrepareBell(BridgeQ, BobQ);

        // The teleportation process : Alice measure her qubit and bridge qubit, then send the measurement result to Bob
        let message = Decode(AliceQ, BridgeQ);

        // The Qubit Recovery : Bob use the message to recover the original state
        Encode(BobQ, message);

        // Verify the teleportation
        let result = Verify(AliceQ, BobQ);

        // Release the qubits
        Reset(AliceQ); Reset(BridgeQ); Reset(BobQ);
        return result;
    }
}