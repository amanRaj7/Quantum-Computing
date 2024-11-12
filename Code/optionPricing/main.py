import qsharp
import numpy as np

qsharp.init(project_root='./quantum_file')

trial = 100
output_range = np.linspace(0.0, 7, 8)
data = [0]*8
def average(data):
    return sum(data)/len(data)
def count(data, i):
    return data.count(i)
output = []
input_data = 'optionPricing.qac_operation()'
output = qsharp.run(input_data, shots=trial)

for i in range(8):
    data[i] = count(output, i)/trial

import matplotlib.pyplot as plt
plt.xlabel('Output')
plt.ylabel('Probability')
plt.plot(output_range, data)
plt.savefig('result.png')