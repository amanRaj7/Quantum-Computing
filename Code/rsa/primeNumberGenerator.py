import qsharp
qsharp.init(project_root='./quantum_file')
from checkPrime import isPrime

def randomBitGenerator(len):
    """
        This function generate random bit using quantum computing
        Input: len(int)
        Output: Result(int [])
    """
    command = "RandomBitGenerator.BitGenerator({})".format(len)
    result = qsharp.run(command, shots=1)
    return result

def primeNumberGenerator(len = 5):
    """This function generate random Prime Number

    Args:
        len (int, optional): Defaults to 5.

    Returns:
        int: Prime Number
    """
    while True:
        p = "0b"+"".join(map(lambda x: str(x), randomBitGenerator(len)[0]))
        if isPrime(int(p, 2)):
            return int(p, 2)
        
# if __name__ == '__main__':
#     print(primeNumberGenerator(10))

    