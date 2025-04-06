fm = fimath('RoundingMethod','Nearest',...
            'OverflowAction','Saturate', ...
            'ProductMode','FullPrecision', ...
            'SumMode', 'FullPrecision');

nt1 = numerictype(1, 16, 15);
nt = numerictype(1, 16, 13);

template = fi([],nt,fm);
theta_0 = cast([0;0;0],'like',template);
phi_0 = cast([0;0;0],'like',template);
lambda_0 = cast([0;0;0],'like',template);

theta_1 = cast([0;0;0],'like',template);
phi_1 = cast([0;0;0],'like',template);
lambda_1 = cast([0;0;0],'like',template);

initState_0 = complex(fi([0.772790905621241;0.631669339981830],nt1,fm), ...
    fi([0.052860346093275;0.031525306135226],nt1,fm));
initState_0_bin = bin(initState_0);

initState_1 = complex(fi([0.772790905621241;0.631669339981830],nt1,fm),...
    fi([0.052860346093275;0.031525306135226],nt1,fm));
initState_1_bin = bin(initState_1);

opName_0 = fi([3;12;15],0,16,0);
opName_0_bin = bin(opName_0);
theta_0(:) = [0; pi/4; 0];
theta_0_bin = bin(theta_0);
phi_0(:) = [0;0;0];
phi_0_bin = bin(phi_0);
lambda_0(:) = [0;0;0];
lambda_0_bin = bin(lambda_0);

opName_1 = fi([13;12;11],0,16,0);
opName_1_bin = bin(opName_1);
theta_1(:) = [-pi/2; pi/4; pi/6];
theta_1_bin = bin(theta_1);
phi_1(:) = [0;0;-pi/2];
phi_1_bin = bin(phi_1);
lambda_1(:) = [0;0;-pi/9];
lambda_1_bin = bin(lambda_1);

[computerState_my, probFinal_my, probQubit_0_my, probQubit_1_my] = ...
    quantumComputer_twoQubit(opName_0,theta_0,phi_0,lambda_0,opName_1,theta_1,...
    phi_1,lambda_1,initState_0,initState_1);
computerState_bin_my = bin(computerState_my);







