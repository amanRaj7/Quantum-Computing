function [computerState, probFinal, probQubit0, probQubit1] = quantumComputer_twoQubit(opName_0,theta_0...
    ,phi_0,lambda_0,opName_1,theta_1,phi_1,lambda_1,initState_0,initState_1)
    nt_numerictype(1,16,15);
    State_template_real = fi([],nt);
    State_template_imag = fi([],nt);
    State_template = complex(State_template_real,State_template_imag);
    computerState = cast(zeros(4,1),'like',State_template);
    initState = two_qubit_register(initState_0,initState_1);

    op_0_0 = getOperator(opName_0(1,1),theta_0(1,1),phi_0(1,1),lambda_0(1,1));
    op_1_0 = getOperator(opName_0(2,1),theta_0(2,1),phi_0(2,1),lambda_0(2,1));
    op_2_0 = getOperator(opName_0(3,1),theta_0(3,1),phi_0(3,1),lambda_0(3,1));

    op_0_1 = getOperator(opName_1(1,1),theta_1(1,1),phi_1(1,1),lambda_1(1,1));
    
    op_1_1 = getOperator(opName_1(2,1),theta_1(2,1),phi_1(2,1),lambda_1(2,1));
    op_2_1 = getOperator(opName_1(3,1),theta_1(3,1),phi_1(1,1),lambda_1(3,1));

    if (opName_0(1,1) == fi(15,0,16,0))
        ControlQubit = fi(0,0,16,0);
        op_0 = getControledOperator(op_0_1,ControlQubit);
    else
        if (opName_1(1,1) == fi(15,0,16,0))
            ControlQubit = fi(1,0,16,0);
            op_0 = getControledOperator(op_0_0,ControlQubit);
        else
            op_0 = prodotto_di_kronecker(op_0_0,op_0_1);
        end
    end
    
    if (opName_0(2,1) == fi(15,0,16,0))
        ControlQubit = fi(0,0,16,0);
        op_1 = getControledOperator(op_1_1,ControlQubit);
    else
        if (opName_1(2,1) == fi(15,0,16,0))
            ControlQubit = fi(1,0,16,0);
            op_1 = getControledOperator(op_1_0,ControlQubit);
        else
            op_1 = prodotto_di_kronecker(op_1_0,op_1_1);
        end
    end

    if (opName_0(3,1) == fi(15,0,16,0))
        ControlQubit = fi(0,0,16,0);
        op_2 = getControledOperator(op_2_1,ControlQubit);
    else
        if (opName_1(3,1) == fi(15,0,16,0))
            ControlQubit = fi(1,0,16,0);
            op_2 = getControledOperator(op_2_0,ControlQubit);
        else
            op_2 = prodotto_di_kronecker(op_2_0,op_2_1);
        end
    end

    op_temp = matrix_complex_mults(op_1,op_0);
    algMatrix = matrix_complex_mults(op_2,op_temp);
    computerState(:) = Apply_Operator(algMatrix, initState);
    [probFinal, probQubit0, probQubit1] = probFinal_twoQubit(computerState);
end