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
        print("Multiplier")
        for ele in multiplier:
            print(ele, end=' ')

        print("\nmultiplicand")
        for ele in multiplicand:
            print(ele, end=' ')
        print("\nend")

        temp_pro = [self.state_1]*16

        x0y0 = self.ppg(multiplier[0], multiplicand[0], temp_pro[0])[-1]
        x0y1 = self.ppg(multiplier[0], multiplicand[1], temp_pro[1])[-1]
        x0y2 = self.ppg(multiplier[0], multiplicand[2], temp_pro[2])[-1]
        x0y3 = self.ppg(multiplier[0], multiplicand[3], temp_pro[3])[-1]
        print(x0y0, x0y1, x0y2, x0y3)

        x1y0 = self.ppg(multiplier[1], multiplicand[0], temp_pro[4])[-1]
        x1y1 = self.ppg(multiplier[1], multiplicand[1], temp_pro[5])[-1]
        x1y2 = self.ppg(multiplier[1], multiplicand[2], temp_pro[6])[-1]
        x1y3 = self.ppg(multiplier[1], multiplicand[3], temp_pro[7])[-1]
        print(x1y0, x1y1, x1y2, x1y3)

        x2y0 = self.ppg(multiplier[2], multiplicand[0], temp_pro[8])[-1]
        x2y1 = self.ppg(multiplier[2], multiplicand[1], temp_pro[9])[-1]
        x2y2 = self.ppg(multiplier[2], multiplicand[2], temp_pro[10])[-1]
        x2y3 = self.ppg(multiplier[2], multiplicand[3], temp_pro[11])[-1]
        print(x2y0, x2y1, x2y2, x2y3)

        x3y0 = self.ppg(multiplier[3], multiplicand[0], temp_pro[12])[-1]
        x3y1 = self.ppg(multiplier[3], multiplicand[1], temp_pro[13])[-1]
        x3y2 = self.ppg(multiplier[3], multiplicand[2], temp_pro[14])[-1]
        x3y3 = self.ppg(multiplier[3], multiplicand[3], temp_pro[15])[-1]
        print(x3y0, x3y1, x3y2, x3y3)

        # pro = [self.state_1]*8
        # c = [[self.state_1]*2]*8
        # temp = [self.state_1]*8

        # temp_add = [self.state_1]*15

        # print("Quantum Full Adder")
        # print("1")
        # pro[0], c[0][0] = self.qfa(x0y0, temp_add[0], temp_add[1], temp_add[2])[3:]
        # print(pro[0], c[0][0])

        # print("2")
        # pro[1], c[1][0] = self.qfa(x1y0, x0y1, c[0][0], temp_add[3])[3:]
        # print(pro[1], c[1][0])

        # print("3")
        # pro[2],temp[0] = self.qfa(x0y2, x1y1, c[1][0], temp_add[4])[3:]
        # pro[2],c[2][0] = self.qfa(pro[2],x2y0, temp_add[14], temp_add[5])[3:]
        # c[2][1], c[2][0] = self.qfa(temp[0], c[2][0], temp_add[15], temp_add[16])[3:]
        # print(pro[2], c[2][0], c[2][1])

        # print("4")
        # pro[3],temp[1] = self.qfa(x3y0, x2y1, c[2][0], temp_add[6])[3:]
        # pro[3],temp[1] = self.qfa(pro[3],x1y2, temp[1], temp_add[7])[3:]
        # print(pro[3], temp[1])
        # pro[3],c[3] = self.qfa(pro[3],x0y3, temp[1], temp_add[8])[3:]
        # print(pro[3], c[3])
        
        # print("5")
        # pro[4],temp = self.qfa(x3y1, x2y2, c[3], temp_add[9])[3:]
        # print(pro[4], temp)
        # pro[4],c[4] = self.qfa(pro[4],x1y3, temp, temp_add[10])[3:]
        # print(pro[4], c[4])

        # print("6")
        # pro[5],c[5] = self.qfa(x3y2, x2y3, c[4], temp_add[11])[3:]
        # print(pro[5], c[5])

        # print("7")
        # pro[6],c[6] = self.qfa(x3y3, temp_add[13], c[5], temp_add[12])[3:]
        # print(pro[6], c[6])

        # print("8")
        # pro[7] = c[6]
        # print(pro[7])
        

        ## second try
        # pro = [self.state_1]*9
        # c = [[self.state_1]*2]*9
        # temp_carry = [self.state_1]*9
        # temp_pro = [self.state_1]*4
        # temp_add = [self.state_1]*28
        # pro[0], c[0][0] = self.qfa(x0y0, temp_add[0], temp_add[1], temp_add[2])[3:]
        # print(pro[0], c[0][0])

        # pro[1], c[1][0] = self.qfa(x1y0, x0y1, c[0][0], temp_add[3])[3:]
        # print(pro[1], c[1][0])

        # pro[2],temp_carry[0] = self.qfa(x0y2, x1y1, c[1][0], temp_add[4])[3:]
        # pro[2],temp_carry[1] = self.qfa(c[1][0],x2y0, temp_add[6], temp_add[5])[3:]
        # c[2][1], c[2][0] = self.qfa(temp_carry[0], temp_carry[1], temp_add[7], temp_add[8])[3:]
        # print(pro[2], c[2][0], c[2][1])

        # temp_pro[0],temp_carry[2] = self.qfa(x3y0, x2y1, c[2][0], temp_add[9])[3:]
        # temp_pro[1],temp_carry[3] = self.qfa(x1y2, x0y3, temp_add[27], temp_add[10])[3:]
        # pro[3],temp_carry[4] = self.qfa(temp_pro[0], temp_pro[1], temp_add[11], temp_add[12])[3:]
        # c[3][1], c[3][0] = self.qfa(temp_carry[2], temp_carry[3], temp_carry[4], temp_add[14])[3:]
        # print(pro[3], c[3][0], c[3][1])

        # pro[4],temp_carry[5] = self.qfa(x3y1, x2y2, c[3][0], temp_add[15])[3:]
        # temp_pro[3],temp_carry[6] = self.qfa(pro[4],x1y3, temp_add[16], temp_add[17])[3:]
        # c[4][1], c[4][0] = self.qfa(temp_carry[5], temp_carry[6], c[3][1], temp_add[19])[3:]
        # print(pro[4], c[4][0], c[4][1])

        # pro[5],temp_carry[7] = self.qfa(x3y2, x2y3, c[4][0], temp_add[20])[3:]
        # c[5][1], c[5][0] = self.qfa(temp_carry[7], c[4][1], temp_add[22], temp_add[21])[3:]
        # print(pro[5], c[5][0], c[5][1])

        # pro[6], temp_carry[8] = self.qfa(x3y3, temp_add[24], c[5][0], temp_add[23])[3:]
        # c[6][1], c[6][0] = self.qfa(temp_carry[8], c[5][1], temp_add[26], temp_add[25])[3:]
        # print(pro[6], c[6][0], c[6][1])

        # pro[7] = c[6][0]

        # pro[8] = c[6][1]

        temp = [self.state_1]*16
        row1 = [x0y0, x0y1, x0y2, x0y3, temp[6], temp[7], temp[8], temp[12]]
        row2 = [temp[0], x1y0, x1y1, x1y2, x1y3, temp[9], temp[10], temp[13]]
        row3 = [temp[1], temp[2], x2y0, x2y1, x2y2, x2y3, temp[11], temp[14]]
        row4 = [temp[3], temp[4], temp[5], x3y0, x3y1, x3y2, x3y3, temp[15]]

        temp_row1 = self.add_row(row1, row2)
        temp_row2 = self.add_row(row3, row4)

        return self.add_row(temp_row1, temp_row2)
        # return pro

    def add_row(self, row1, row2):
        res = [self.state_1]*8
        c = [self.state_1]*9
        for i in range(8):
            res[i], c[i+1] = self.qfa(row1[i], row2[i], c[i], self.state_1)[3:]
        return res
class state:
    def __init__(self, comprob_a, comprob_b):
        self.prob_a = comprob_a
        self.prob_b = comprob_b
    def modify(self, prob_0, prob_1):
        self.prob_a = prob_0
        self.prob_b = prob_1
    def __str__(self):
        out = ''
        # out = "Probability: \n"
        # out += "Prob of 0: "
        # out += str((abs(self.prob_a))**2)
        # out += '\n'
        # out += "Prob of 1: "
        # out += str((abs(self.prob_b))**2)
        # out += '\n'
        out += self.qubit()
        # out += '\n-------\n'
        return out
    def __eq__(self, other):
        if self.prob_a == other.prob_a and self.prob_b==other.prob_b:
            return True
        else:
            return False
    def qubit(self):
        out = ''
        # out += 'Qubit: '
        # out += str(self.prob_a) if (self.prob_a != 0) else ''
        # out += '|0>' if (self.prob_a!=0) else ''
        # out += '+' if ((self.prob_a!=0) and (self.prob_b!=0)) else ''
        # out += str(self.prob_b) if (self.prob_b != 0) else ''
        # out += '|1>' if (self.prob_b!=0) else ''

        out += '0' if (self.prob_a!=0) else ''
        out += '1' if (self.prob_b!=0) else ''
        return out