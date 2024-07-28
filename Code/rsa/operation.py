import qsharp
qsharp.init(project_root='./quantum_file')

def mapper(num, len = 5):
    """This function convert num into array of bits

    Args:
        num (int): Number
        len (int, optional): Length of array. Defaults to 5.
        Return: int []
    """
    return list(map(lambda x: int(x), bin(num)[2:].zfill(len)))

def add_n(num1, num2, len = 5):
    """This function add two number using quantum computing

    Args:
        num1 (int): First Number
        num2 (int): Second Number
        len (int, optional): Bit length of number. Defaults to 5.
    """
    c,d = mapper(num1, len), mapper(num2, len)
    command = "QuantumOperation.addNumber({}, {})".format(c, d)
    result = qsharp.run(command, shots=1)
    return int("0b"+"".join(map(str, result[0])), 2)

def sub_n(num1, num2, len = 5):
    """This function subtract two number using quantum computing

    Args:
        num1 (int): First Number (num1>num2)
        num2 (int): Second Number (num2<num1)
        len (int, optional): Bit length of number. Defaults to 5.
    """
    d, c = mapper(num1, len), mapper(num2, len)
    command = "QuantumOperation.subNumber({}, {})".format(c, d)
    result = qsharp.run(command, shots=1)
    return int("0b"+"".join(map(str, result[0])), 2)

def mul_n(num1, num2, len=5):
    """This function multiply two number using quantum computing

    Args:
        num1 (int): First Number
        num2 (int): Second Number
        len (int, optional): Bit length of the number. Defaults to 5.
    """
    n2 = mapper(num2)
    command = "QuantumOperation.multiplyNumber({}, {})".format(num1, n2)
    result = qsharp.run(command, shots= 1)
    return int("0b"+"".join(map(str, result[0])), 2)

def mod_inv(x, y, len = 5):
    """This function calculate multiplicative inverse of num1 mod num2

    Args:
        num1 (int): Number
        num2 (int): Modulus
        len (int, optional): Bit length of number. Defaults to 5.
    """
    x,y = str(bin(x)[2:]), str(bin(y)[2:])

    x = int(x, 2)
    y = int(y, 2)

    while((x%2 == 0) and (y%2 == 0)):
        x = int(x/2)
        y = int(y/2)
        g = 2*g


    u = x
    v = y
    A = 1
    B = 0
    C = 0
    D = 1


    def uv_func(u,v,A,B,C,D):
        
        while(u%2 == 0):
            u = int(u/2)
            if(A%2 == 0 and B%2 == 0):
                A = int(A/2)
                B = int(B/2)
            else:
                A = int((A+y) /2)
                B = int((B-x) /2)

        while(v%2 == 0):
            v = int(v/2)
            if(C%2 == 0 and D%2 == 0):
                C = int(C/2)
                D = int(D/2)
            else:
                C = int((C+y) /2)
                D = int((D-x) /2)
        if(u >= v):
            u = u-v
            A = A-C
            B = B-D
        else:
            v = v-u
            C = C-A
            D = D-B

        if(u == 0):
            a = C
            final_D = D
            return final_D
        else:
            return uv_func(u,v,A,B,C,D)



    out = uv_func(u,v,A,B,C,D)
    if(out < 0):
        out = out + x  
    out = str(bin(out)[2:])
    return out

# if __name__ == '__main__':
#     a = 20
#     b = 10
#     c = add_n(a, b)
#     d = sub_n(a, b)
#     print(c, d)

    # a = 5
    # b = 13
    # print(mul_n(a, b))