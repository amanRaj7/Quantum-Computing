from primeNumberGenerator import primeNumberGenerator
from operation import add_n, sub_n

if __name__ == '__main__':
    no_bit = 5
    p = primeNumberGenerator(no_bit)
    q = primeNumberGenerator(no_bit)
    while p==q:
        q = primeNumberGenerator(no_bit)
    
    pminus1 = sub_n(p, 1)
    qminus1 = sub_n(q, 1)

    N = p*q
    phi_N = pminus1*qminus1

    print(p, q)
    print(N, phi_N)

