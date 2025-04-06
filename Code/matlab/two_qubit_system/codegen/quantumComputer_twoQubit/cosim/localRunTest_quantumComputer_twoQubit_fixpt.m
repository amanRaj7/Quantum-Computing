function localRunTest_quantumComputer_twoQubit_fixpt
   fxptPath = 'C:\Doc\github\Quantum\Code\matlab\two_qubit_system\codegen\quantumComputer_twoQubit\fixpt';
addpath(fxptPath);
cleanupObj = onCleanup(@() rmpath(fxptPath));

   quantumComputer_twoQubit_tb_cosim;
end

