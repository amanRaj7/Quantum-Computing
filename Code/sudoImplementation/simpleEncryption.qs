namespace SimpleEncryption{
    open Microsoft.Quantum.Canon;
    open Microsoft.Quantum.Intrinsic;
    open Microsoft.Quantum.Convert;
    open Microsoft.Quantum.Random;
    open Microsoft.Quantum.Math;

    operation PrepareBell( q1 : Qubit, q2 : Qubit) : Unit{
        // The Bell state preparation : |Phi+> = 1/sqrt(2) * (|00> + |11>)
        H(q1); CNOT(q1, q2);
    }

    operation AliceMeasure( q1 : Qubit[]) : Int[]{
        // The Alice measure her qubit
        let result_int = [ResultArrayAsInt([M(q1[0])]), ResultArrayAsInt([M(q1[1])]), ResultArrayAsInt([M(q1[2])]), ResultArrayAsInt([M(q1[3])]), ResultArrayAsInt([M(q1[4])])];
        return result_int;
    }

    operation BobMeasure( q1 : Qubit[]) : Int[]{
        // The Bob measure his qubit
        let result_int = [ResultArrayAsInt([M(q1[0])]), ResultArrayAsInt([M(q1[1])]), ResultArrayAsInt([M(q1[2])]), ResultArrayAsInt([M(q1[3])]), ResultArrayAsInt([M(q1[4])])];
        return result_int;
    }

    operation EncryptMessage( message : Int[], key : Int[]) : Int[]{
        // Encrypt the message with the key
        let encryptedMessage = [(message[0]+key[0])%2, (message[1]+key[1])%2, (message[2]+key[2])%2, (message[3]+key[3])%2, (message[4]+key[4])%2];
        return encryptedMessage;
    }

    operation DecryptMessage( encryptedMessage : Int[], key : Int[]) : Int[]{
        // Decrypt the message with the key
        let decryptedMessage = [(encryptedMessage[0]+key[0])%2, (encryptedMessage[1]+key[1])%2, (encryptedMessage[2]+key[2])%2, (encryptedMessage[3]+key[3])%2, (encryptedMessage[4]+key[4])%2];
        return decryptedMessage;
    }

    @EntryPoint()
    operation QuantumMain() : Int[][]{
        // The main function of simple encryption
        
        // Alice Message : 0111001101
        let message = [1, 1, 0, 1, 0];
        Message($"Alice Message : {message}");

        // Key
        use AliceQ = Qubit[5];
        use BobQ = Qubit[5];

        // Prepare Bell state
        for i in 0..4{
            PrepareBell(AliceQ[i], BobQ[i]);
        }


        // Alice Measure : Generate the key
        let alice_key = AliceMeasure(AliceQ);
        Message($"Key : {alice_key}");

        // Encrypt the message
        let encryptedMessage = EncryptMessage(message, alice_key);
        Message($"Encrypted Message : {encryptedMessage}");

        // Bob Measure : Decrypt the message
        let bob_key = BobMeasure(BobQ);
        let decryptedMessage = DecryptMessage(encryptedMessage, bob_key);

        Message($"Decrypted Message : {decryptedMessage}");


        // Reset the qubits
        for i in 0..4{
            Reset(AliceQ[i]);
            Reset(BobQ[i]);
        }

        return [message, decryptedMessage];

    }
}