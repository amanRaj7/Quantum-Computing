from primeNumberGenerator import primeNumberGenerator
from operation import add_n, sub_n, mod_inv

def public_key_generator():
    no_bit = 5
    p = primeNumberGenerator(no_bit)
    q = primeNumberGenerator(no_bit)
    while p==q:
        q = primeNumberGenerator(no_bit)
    
    pminus1 = sub_n(p, 1)
    qminus1 = sub_n(q, 1)

    N = p*q
    phi_N = pminus1*qminus1
    e = 65537
    d = mod_inv(e, phi_N)
    d = int(d,2)
    print("Public Key: ", e, N)
    return e, N, d

if __name__ == '__main__':
    e, N, d = public_key_generator()
    while N < 128:
        e, N, d = public_key_generator()
    print("Public Key: ", e, N)

    text = input("Write the message you want to encrypt: ")
    text = text.lower()
    
    text = [ord(i) for i in text]
    print(text)
    encrypted_text = [(i**e)%N for i in text]
    print(encrypted_text)

    decrypted_text = [(i**d)%N for i in encrypted_text]
    print(decrypted_text)
    decrypted_text = [chr(i) for i in decrypted_text]
    print(decrypted_text)


    
