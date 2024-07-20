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

# if __name__ == '__main__':
#     a = 20
#     b = 10
#     c = add_n(a, b)
#     d = sub_n(a, b)
#     print(c, d)