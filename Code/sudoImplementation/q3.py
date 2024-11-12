# import libaries
import numpy as np
import math
import matplotlib.pyplot as plt

# Multiplication using Qubit implementation
class qubit:
    def __init__(self, state_len, arr=[]):
        """Initialize the qubit"""
        if(len(arr)==0):
            self.state = [0]*(2**state_len)
        else:
            self.state = arr

    def encoder(self, num):
        """ This function encoded number into qubit state """
        binary_num = bin(num)[2:][::-1]
        for (i,char) in enumerate(binary_num):
            if char=='1':
                self.state[i] = 1
            else:
                self.state[i] = 0

    def fft(self):
        """ This function calculate fft of the state """
        self.state = np.fft.fft(self.state[::-1])
        self.state = self.state[::-1]

    def ifft(self):
        """ This function calculate ifft of the state """
        self.state = np.fft.ifft(self.state[::-1])

    def __mul__(self, other):
        """ This function calculate the multiplication of two qubit and return result """
        self.fft(), other.fft()
        c = [0]*(2**5)
        for i in range(len(self.state)):
            c[i] = self.state[i]*other.state[i]
        c = qubit(5, c)
        c.ifft()
        return c

    def extract_result(self):
        """ This function uses to decode the qubit to result """
        res = [0]*(2**5)
        for i in range(len(self.state)):
            res[i] = round(abs(self.state[i]))
        res = res[::-1]
        result = 0
        for i,j in enumerate(res):
            result += j*2**i
        result = int(result/2)
        print(result)

a = qubit(5)
a.encoder(8616)
b=qubit(5)
b.encoder(4532)

res = a*b

if __name__ == "__main__":
    print("Number 1: ", 8616)
    print("Number 2: ", 4532)
    print("Result: ", end="")
    res.extract_result()