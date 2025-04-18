% Auto generated function to simulate the generated HDL code using cosimulation
% 
% Generated by MATLAB 24.1 and HDL Coder 24.1

function [ref_computerState,ref_probFinal,ref_probQubit0,ref_probQubit1] = quantumComputer_twoQubit_fixpt_cosim(opName_0,theta_0,phi_0,lambda_0,opName_1,theta_1,phi_1,lambda_1,initState_0,initState_1)

coder.extrinsic('quantumComputer_twoQubit_fixpt_sysobj_cosim');
coder.extrinsic('hdlverifier.assert');
coder.extrinsic('hdlverifier.Delay');
coder.extrinsic('step');

% Declare persistent variables
persistent initialized;

% Initialize persistent variables
if isempty(initialized)
   initialized = true;
end

% Call the original MATLAB function to get reference signal
[ref_computerState,ref_probFinal,ref_probQubit0,ref_probQubit1] = quantumComputer_twoQubit_fixpt(opName_0,theta_0,phi_0,lambda_0,opName_1,theta_1,phi_1,lambda_1,initState_0,initState_1);

% Convert input signals
opName_0_1 = opName_0(1);

opName_0_2 = opName_0(2);

opName_0_3 = opName_0(3);

theta_0_1 = theta_0(1);

theta_0_2 = theta_0(2);

theta_0_3 = theta_0(3);

phi_0_1 = phi_0(1);

phi_0_2 = phi_0(2);

phi_0_3 = phi_0(3);

lambda_0_1 = lambda_0(1);

lambda_0_2 = lambda_0(2);

lambda_0_3 = lambda_0(3);

opName_1_1 = opName_1(1);

opName_1_2 = opName_1(2);

opName_1_3 = opName_1(3);

theta_1_1 = theta_1(1);

theta_1_2 = theta_1(2);

theta_1_3 = theta_1(3);

phi_1_1 = phi_1(1);

phi_1_2 = phi_1(2);

phi_1_3 = phi_1(3);

lambda_1_1 = lambda_1(1);

lambda_1_2 = lambda_1(2);

lambda_1_3 = lambda_1(3);

initState_0_re = real(initState_0);

initState_0_im = imag(initState_0);

initState_0_re_1 = initState_0_re(1);

initState_0_re_2 = initState_0_re(2);

initState_0_im_1 = initState_0_im(1);

initState_0_im_2 = initState_0_im(2);

initState_1_re = real(initState_1);

initState_1_im = imag(initState_1);

initState_1_re_1 = initState_1_re(1);

initState_1_re_2 = initState_1_re(2);

initState_1_im_1 = initState_1_im(1);

initState_1_im_2 = initState_1_im(2);



% Run cosimulation
[computerState_re_1,computerState_re_2,computerState_re_3,computerState_re_4,computerState_im_1,computerState_im_2,computerState_im_3,computerState_im_4,probFinal_1,probFinal_2,probFinal_3,probFinal_4,probQubit0_1,probQubit0_2,probQubit1_1,probQubit1_2] = quantumComputer_twoQubit_fixpt_sysobj_cosim(opName_0_1,opName_0_2,opName_0_3,theta_0_1,theta_0_2,theta_0_3,phi_0_1,phi_0_2,phi_0_3,lambda_0_1,lambda_0_2,lambda_0_3,opName_1_1,opName_1_2,opName_1_3,theta_1_1,theta_1_2,theta_1_3,phi_1_1,phi_1_2,phi_1_3,lambda_1_1,lambda_1_2,lambda_1_3,initState_0_re_1,initState_0_re_2,initState_0_im_1,initState_0_im_2,initState_1_re_1,initState_1_re_2,initState_1_im_1,initState_1_im_2);

% Convert output signals
probQubit1 = [probQubit1_1;probQubit1_2];

probQubit0 = [probQubit0_1;probQubit0_2];

probFinal = [probFinal_1;probFinal_2;probFinal_3;probFinal_4];

computerState_im = [computerState_im_1;computerState_im_2;computerState_im_3;computerState_im_4];

computerState_re = [computerState_re_1;computerState_re_2;computerState_re_3;computerState_re_4];

computerState = complex(computerState_re,computerState_im);



% Verify the cosimulation output
hdlverifier.assert(computerState,ref_computerState,'computerState');
hdlverifier.assert(probFinal,ref_probFinal,'probFinal');
hdlverifier.assert(probQubit0,ref_probQubit0,'probQubit0');
hdlverifier.assert(probQubit1,ref_probQubit1,'probQubit1');

