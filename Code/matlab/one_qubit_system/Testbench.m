initState = [0.772790905621241+0.052860346093275i;
    0.631669339981830+0.031525306135226i];
qAlgorithm = ["RY|-pi/2" "RX|-pi/4" "U3|pi/6|-pi/2|-pi/9"];
[computerState, probFinal, algMatrix] = quantumComputer(qAlgorithm, 1, initState);
computerState_fi = fi(computerState,1,16,15);
computerState_bin = bin(computerState_fi);
probFinal_fi = fi(probFinal,1,16,15);
probFinal_bin = bin(probFinal_fi);