from multiplication import multiply4x4

# print(multiply4x4(13, 11))
from quantum_mul import multiply, state

state_0 = state(1, 0)
state_1 = state(0, 1)
stateArr = [state_0, state_1]
model = multiply()
# for i in range(2):
#     for j in range(2):
#         print("Multiplying ", i, j)
#         res = model.qfa(stateArr[i], stateArr[j], state_0, state_1)
#         for ele in res:
#             print(ele, end=' ')
#         print("End")

# for i in stateArr:
#     for j in stateArr:
#         for k in stateArr:
#             print("qunatum full addition ", i, j, k)
#             res = model.qfa(i, j, k, state_0)
#             for ele in res:
#                 print(ele, end=' ')
#             print("End")

# for i in stateArr:
#     for j in stateArr:
#         print("qunatum partial product ", i, j)
#         res = model.ppg(i, j, state_0)
#         for ele in res:
#             print(ele, end=' ')
#         print("End")

