class state:
    def __init__(self, comprob_a, comprob_b):
        self.prob_a = comprob_a
        self.prob_b = comprob_b
    def modify(self, prob_0, prob_1):
        self.prob_a = prob_0
        self.prob_b = prob_1
    def __str__(self):
        out = "Probability: \n"
        out += "Prob of 0: "
        out += str((abs(self.prob_a))**2)
        out += '\n'
        out += "Prob of 1: "
        out += str((abs(self.prob_b))**2)
        out += '\n'
        out += self.qubit()
        out += '\n-------\n'
        return out
    def __eq__(self, other):
        if self.prob_a == other.prob_a and self.prob_b==other.prob_b:
            return True
        else:
            return False
    def qubit(self):
        out = ''
        out += 'Qubit: '
        out += str(self.prob_a) if (self.prob_a != 0) else ''
        out += '|0>' if (self.prob_a!=0) else ''
        out += '+' if ((self.prob_a!=0) and (self.prob_b!=0)) else ''
        out += str(self.prob_b) if (self.prob_b != 0) else ''
        out += '|1>' if (self.prob_b!=0) else ''
        return out

# Defining the state of v Gate
state_1 = state(1, 0) # define the |0>
state_2 = state((1/(0+2j)**0.5), (1j/(0+2j)**0.5))
state_3 = state(0, 1) # define the |1>
state_4 = state( (1j/(0+2j)**0.5), (1/(0+2j)**0.5))
state_arr = [state_1, state_2, state_3, state_4]

def vGate(cont,out):
    """ V Gate act as state machine """
    if cont==state_1:
        # No change to out
        return out
    elif cont==state_3:
        # change out state to next state
        return state_arr[(state_arr.index(out)+1)%4]
    
def vGateT(cont, out):
    """ Defining the transpose of vGate """
    if cont==state_1:
        # No change to out
        return out
    elif cont==state_3:
        # change out state to prev state
        return state_arr[(state_arr.index(out)-1)%4]
    
def cNot(cont, out):
    """ This function implement quantum cNot"""
    if cont==state_1:
        # No change to out
        return out
    elif cont==state_3:
        # change the state |0> to |1> and |1> to |0>
        if out==state_1:
            return state_3
        elif out==state_3:
            return state_1
        else:
            print("Not handled yet")

def ppg(a, b, s = state_1):
    """ This function simulated the working of Product pair generator (implement quantum computing) """
    s = vGate(a, s)
    a = cNot(b, a)
    s = vGate(b, s)
    s = vGateT(a, s)
    a = cNot(b, a)
    return a, b, s

def qfa(a, b, c, s=state_1):
    """This function implement the quantum full addition"""
    temp = (a,b,c)
    s = vGate(b, s)
    s = vGate(a, s)
    b = cNot(a, b)
    s = vGate(c, s)
    c = cNot(b, c)
    s = vGateT(c,s)
    return temp[0], temp[1], temp[2], c, s

def qfs(a, b, c, s=state_1):
    """This function implement the quantum full addition"""
    temp = (a,b,c)
    s = vGate(c, s)
    c = cNot(b, c)
    s = vGate(b, s)
    c = cNot(a, c)
    s = vGateT(a, s)
    s = vGate(c, s)
    return temp[0], temp[1], temp[2], c, s

def quantum_multiplication4X4(multiplier, multiplicand):
    """The function multiplied two quantum number"""
    x0y0 = ppg(multiplier[0], multiplicand[0])[-1]
    x0y1 = ppg(multiplier[0], multiplicand[1])[-1]
    x0y2 = ppg(multiplier[0], multiplicand[2])[-1]
    x0y3 = ppg(multiplier[0], multiplicand[3])[-1]
    x1y0 = ppg(multiplier[1], multiplicand[0])[-1]
    x1y1 = ppg(multiplier[1], multiplicand[1])[-1]
    x1y2 = ppg(multiplier[1], multiplicand[2])[-1]
    x1y3 = ppg(multiplier[1], multiplicand[3])[-1]
    x2y0 = ppg(multiplier[2], multiplicand[0])[-1]
    x2y1 = ppg(multiplier[2], multiplicand[1])[-1]
    x2y2 = ppg(multiplier[2], multiplicand[2])[-1]
    x2y3 = ppg(multiplier[2], multiplicand[3])[-1]
    x3y0 = ppg(multiplier[3], multiplicand[0])[-1]
    x3y1 = ppg(multiplier[3], multiplicand[1])[-1]
    x3y2 = ppg(multiplier[3], multiplicand[2])[-1]
    x3y3 = ppg(multiplier[3], multiplicand[3])[-1]
    pro = [state_1]*8
    c = state_1
    pro[0], c = qfa(x0y0, state_1, state_1)[3:]
    pro[1], c = qfa(x1y0, x0y1, c)[3:]
    pro[2],c = qfa(x2y0, x1y1, c)[3:]
    pro[2],c = qfa(pro[2],x0y2,c)[3:]
    pro[3],c = qfa(x3y0, x2y1, c)[3:]
    pro[3],c = qfa(pro[3],x1y2, c)[3:]
    pro[3],c = qfa(pro[3],x0y3, c)[3:]
    pro[4],c = qfa(x3y1, x2y2, c)[3:]
    pro[4],c = qfa(pro[4],x1y3,c)[3:]
    pro[5],c = qfa(x3y2, x2y3, c)[3:]
    pro[6],c = qfa(x3y3, state_1, c)[3:]
    pro[7] = c
    return pro

def quantum_multiplication8x8(multiplier, multiplicand):
    """The function multiplies two 8-bit quantum numbers and returns a 16-bit quantum result."""
    partial_products = [[state_1] * 16 for _ in range(8)]
    for i in range(8):
        for j in range(i, i+8):
            partial_products[i][j] = ppg(multiplier[i], multiplicand[j-i])[-1]
    
    pro = [state_1] * 16
    for i in range(8):
        temp = partial_products[i] + [state_1] * (16 - len(partial_products[i]))
        pro  = addition_n(pro, temp, 16)
        pro = pro[:16]
    return pro

def addition_n(a, b, n = 4):
    """ This function calculate the sum of two n-qubit number"""
    carry = [state_1]*(2*n)
    res = [state_1]*(2*n)
    for i in range(n):
        _, __, ___, res[i], carry[i+1] = qfa(a[i], b[i], carry[i])
    res[n] = carry[n]
    return res

def subtractor_n(a, b, n = 4):
    """ This function calculate the difference to two n-qubit number """
    carry = [state_1]*(n+1)
    diff = [state_1]*n
    for i in range(n):
        _, __, ___, diff[i], carry[i+1] = qfs(a[i], b[i], carry[i])
    return diff

def karatsuba(num1, num2):
    """This function implement karatsuba algorithm"""
    X1 = num1[:4]
    X2 = num1[4:]
    
    Y1 = num2[:4]
    Y2 = num2[4:]
    
    U = quantum_multiplication4X4(X1, Y1)
    V = quantum_multiplication4X4(X2, Y2)

    W1 = addition_n(X1, X2)
    W2 = addition_n(Y1, Y2)
    
    W = quantum_multiplication8x8(W1, W2)
    U1 = U+[state_1]*(16-len(U))
    V1 = V+[state_1]*(16-len(V))
    temp = addition_n(U1, V1, 16)[:16]
    Z = subtractor_n(W, temp, 16)

    U = U + [state_1]*(16-len(U))
    V = [state_1]*(16-len(V))+V

    U = [state_1] * (16-len(U)) + U
    V = V + [state_1] * (16-len(V))
    Z = [state_1] * 4 + Z[:-4]

    res = addition_n(U, V, 16)
    res = res[:16]
    res = addition_n(res, Z, 16)
    res = res[:16]

    return res
    
def mapper(num1, num2):
    """This function take two number and return its quatum state"""
    bin1 = bin(num1)[2:]
    bin2 = bin(num2)[2:]
    t = 8
    bin1 = '0'*(t-len(bin1))+bin1
    bin2 = '0'*(t-len(bin2))+bin2
    bin1 = list(map(lambda x: state_1 if x=='0' else state_3, bin1))
    bin2 = list(map(lambda x: state_1 if x=='0' else state_3, bin2))
    bin1 = bin1[::-1]
    bin2 = bin2[::-1]
    return bin1, bin2

def get_result(quantum):
    """This function convert quantum result to numerical value"""
    num = '0b'+''.join(list(map(lambda x: '0' if x==state_1 else '1', quantum))[::-1])
    print(int(num,2), '('+num+')')

if __name__ == '__main__':
    a = 105
    b = 218
    a, b = mapper(a, b)
    print("Number 1: ", end='')
    get_result(a)
    print("Number 2: ", end='')
    get_result(b)
    p = karatsuba(a, b)
    print("Product: ", end='')
    get_result(p)
