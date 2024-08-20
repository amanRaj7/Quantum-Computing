from primeNumberGenerator import primeNumberGenerator
from operation import add_n, sub_n, mod_inv
from multiplication import multiply4x4

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a%b)
def egcd(a, b):
    x,y, u,v = 0,1, 1,0
    while a != 0:
        q, r = b//a, b%a
        m, n = x-u*q, y-v*q
        b,a, x,y, u,v = a,r, u,v, m,n
    gcd = b
    return gcd, x, y
def mod_inverse(a, m):
    print(mod_inv)
    gcd, x, y = egcd(a, m)
    if gcd != 1:
        print("modular inverse does not exist")
        print(mod_inv(a, m))
        return None  # modular inverse does not exist
    else:
        mod_invv = mod_inv(a, m)
        print(mod_invv, x%m)
        return x % m

def public_key_generator():
    # Generate two prime numbers p and q
    no_bit = 4
    p = primeNumberGenerator(no_bit)
    while p<5:
        p = primeNumberGenerator(no_bit)
    q = primeNumberGenerator(no_bit)
    while q<5 or p==q:
        q = primeNumberGenerator(no_bit)

    # Calculate N = p*q
    n = multiply4x4(p, q)
    
    # Calculate phi(N) = (p-1)*(q-1)
    pminus1 = sub_n(p, 1, 4)
    qminus1 = sub_n(q, 1, 4)
    phi_N = multiply4x4(pminus1, qminus1)

    # Choose e such that 1 < e < phi(N) and gcd(e, phi(N)) = 1
    e = primeNumberGenerator(no_bit)
    while e>=phi_N or gcd(e, phi_N) != 1:
        e = primeNumberGenerator(no_bit)
    return (e, n), (phi_N, n)

def key_generator():
    # Calculate d such that d = e^-1 mod phi(N)
    (e, n), (phi_N, n) = public_key_generator()
    d = mod_inverse(e, phi_N)
    if d == None:
        (e, n), (phi_N, n) = public_key_generator()
        d = mod_inverse(e, phi_N)
    return (e,n), (d, n)

def encrypt(message, public_key):
    """Encrypt the message using public key"""
    e, n = public_key
    message = "{".join(message.lower().split(" "))
    cipher = [((ord(char)-97) ** e) % n for char in message]
    return cipher

def decrypt(cipher, private_key):
    """Decrypt the message using private key"""
    d, n = private_key
    plain = [chr((char ** d) % n + 97) for char in cipher]
    return ''.join(plain).replace("{", " ")

if __name__ == '__main__':
    public_key, private_key= key_generator()
    while public_key[1] < 27:
        public_key, private_key = key_generator()
    print("Public Key: ", public_key)
    print("Private Key: ", private_key)

    # text = input("Write the message you want to encrypt: ")
    # text = text.lower()
    
    # text = [ord(i)-97 for i in text]
    # print(text)
    # encrypted_text = [(i**e)%N for i in text]
    # print(encrypted_text)

    # decrypted_text = [(i**d)%N for i in encrypted_text]
    # print(decrypted_text)
    # decrypted_text = [chr(i+97) for i in decrypted_text]
    # print(decrypted_text)
    text = input("Write the message you want to encrypt: ")
    text = text.lower()

    encrypted_text = encrypt(text, public_key)
    print("Encrypted message: ", encrypted_text)

    decrypted_text = decrypt(encrypted_text, private_key)
    print("Decrypted message: ", decrypted_text)




    

