import qsharp
qsharp.init(project_root='./quantum_file')

from operation import mapper

def multiplication(a, b):
    """This function is use to multiply two number using quantum computing

    Args:
        a (int): First Number
        b (int): Second Number
    """
    n1, n2 = mapper(a), mapper(b)
    command = "multiplication.multiplyH({}, {})".format(n1, n2)
    result = qsharp.run(command, shots=1)
    return int("0b"+"".join(map(str, result[0])), 2)

if __name__ == '__main__':
    a = 5
    b = 10
    c = multiplication(a, b)
    print(c)