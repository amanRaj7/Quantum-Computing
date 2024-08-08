class multiply:
    def __init__(self):
        self.state_1 = state(1, 0) # define the |0>
        self.state_2 = state((1/(0+2j)**0.5), (1j/(0+2j)**0.5))
        self.state_3 = state(0, 1) # define the |1>
        self.state_4 = state( (1j/(0+2j)**0.5), (1/(0+2j)**0.5))
        self.state_arr = [self.state_1, self.state_2, self.state_3, self.state_4]
    def vGate(self,cont,out):
        """ V Gate act as state machine """
        if cont==self.state_1:
            # No change to out
            return out
        elif cont==self.state_3:
            # change out state to next state
            return self.state_arr[(self.state_arr.index(out)+1)%4]
    def vGateT(self, cont, out):
        """ Defining the transpose of vGate """
        if cont==self.state_1:
            # No change to out
            return out
        elif cont==self.state_3:
            # change out state to prev state
            return self.state_arr[(self.state_arr.index(out)-1)%4]
    def cNot(self, cont, out):
        """ This function implement quantum cNot"""
        if cont==self.state_1:
            # No change to out
            return out
        elif cont==self.state_3:
            # change the state |0> to |1> and |1> to |0>
            if out==self.state_1:
                return self.state_3
            elif out==self.state_3:
                return self.state_1
            else:
                print("Not handled yet")
    def ppg(self, a, b, s):
        """ This function simulated the working of Product pair generator (implement quantum computing) """
        s = self.vGate(a, s)
        a = self.cNot(b, a)
        s = self.vGate(b, s)
        s = self.vGateT(a, s)
        a = self.cNot(b, a)
        return a, b, s
    def qfa(self, a, b, c, s):
        """This function implement the quantum full addition"""
        temp = (a,b,c)
        s = self.vGate(b, s)
        s = self.vGate(a, s)
        b = self.cNot(a, b)
        s = self.vGate(c, s)
        c = self.cNot(b, c)
        s = self.vGateT(c,s)
        return temp[0], temp[1], temp[2], c, s
    # Implementing quantum circuit of grade school multiplication algorithm
    def quantum_multiplication(self,multiplier, multiplicand):
        """The function multiplied two quantum number"""
        x0y0 = self.ppg(multiplier[0], multiplicand[0], self.state_1)[-1]
        x0y1 = self.ppg(multiplier[0], multiplicand[1], self.state_1)[-1]
        x0y2 = self.ppg(multiplier[0], multiplicand[2], self.state_1)[-1]
        x0y3 = self.ppg(multiplier[0], multiplicand[3], self.state_1)[-1]
        x1y0 = self.ppg(multiplier[1], multiplicand[0], self.state_1)[-1]
        x1y1 = self.ppg(multiplier[1], multiplicand[1], self.state_1)[-1]
        x1y2 = self.ppg(multiplier[1], multiplicand[2], self.state_1)[-1]
        x1y3 = self.ppg(multiplier[1], multiplicand[3], self.state_1)[-1]
        x2y0 = self.ppg(multiplier[2], multiplicand[0], self.state_1)[-1]
        x2y1 = self.ppg(multiplier[2], multiplicand[1], self.state_1)[-1]
        x2y2 = self.ppg(multiplier[2], multiplicand[2], self.state_1)[-1]
        x2y3 = self.ppg(multiplier[2], multiplicand[3], self.state_1)[-1]
        x3y0 = self.ppg(multiplier[3], multiplicand[0], self.state_1)[-1]
        x3y1 = self.ppg(multiplier[3], multiplicand[1], self.state_1)[-1]
        x3y2 = self.ppg(multiplier[3], multiplicand[2], self.state_1)[-1]
        x3y3 = self.ppg(multiplier[3], multiplicand[3], self.state_1)[-1]
        pro = [self.state_1]*8
        c = self.state_1
        pro[0], c = self.qfa(x0y0, self.state_1, self.state_1, self.state_1)[3:]
        pro[1], c = self.qfa(x1y0, x0y1, c, self.state_1)[3:]
        pro[2],c = self.qfa(x2y0, x1y1, c, self.state_1)[3:]
        pro[2],c = self.qfa(pro[2],x0y2,c, self.state_1)[3:]
        pro[3],c = self.qfa(x3y0, x2y1, c, self.state_1)[3:]
        pro[3],c = self.qfa(pro[3],x1y2, c, self.state_1)[3:]
        pro[3],c = self.qfa(pro[3],x0y3, c, self.state_1)[3:]
        pro[4],c = self.qfa(x3y1, x2y2, c, self.state_1)[3:]
        pro[4],c = self.qfa(pro[4],x1y3,c, self.state_1)[3:]
        pro[5],c = self.qfa(x3y2, x2y3, c, self.state_1)[3:]
        pro[6],c = self.qfa(x3y3, self.state_1, c, self.state_1)[3:]
        pro[7] = c
        return pro

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