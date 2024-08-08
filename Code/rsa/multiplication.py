from quantum_mul import multiply

def mapper(num1, num2, model):
    """This function take two number and return its quatum state"""
    bin1 = bin(num1)[2:]
    bin2 = bin(num2)[2:]
    t = 4
    bin1 = '0'*(t-len(bin1))+bin1
    bin2 = '0'*(t-len(bin2))+bin2
    bin1 = list(map(lambda x: model.state_1 if x=='0' else model.state_3, bin1))
    bin2 = list(map(lambda x: model.state_1 if x=='0' else model.state_3, bin2))
    bin1 = bin1[::-1]
    bin2 = bin2[::-1]
    return bin1, bin2

def get_result(quantum, model):
    """This function convert quantum result to numerical value"""
    num = '0b'+''.join(list(map(lambda x: '0' if x==model.state_1 else '1', quantum))[::-1])
    return (int(num,2))

def multiply4x4(num1, num2):
    """This function multiply two number using quantum circuit"""
    model = multiply()
    bin1, bin2 = mapper(num1, num2, model)
    res = model.quantum_multiplication(bin1, bin2)
    return (get_result(res, model))