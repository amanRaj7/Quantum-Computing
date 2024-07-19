import qsharp
import numpy as np

qsharp.init(project_root='./quantum_file')

angle_range = np.linspace(0.0, 2 * np.pi, 20)
data = [0]*20

for i in range(20):
    input_data = 'Main.SpinOperation({}, 1000)'.format(angle_range[i])
    data[i] = qsharp.run(input_data, shots=1)

import matplotlib.pyplot as plt
plt.xlabel('Angle[radians]')
plt.ylabel('Average value')
plt.plot(angle_range, data)
plt.savefig('result.png')