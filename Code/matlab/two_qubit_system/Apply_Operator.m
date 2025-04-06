function C = Apply_Operator(Operator, A)
    Operator_temp = reshape(Operator,4,4);
    A = reshape(A, 4, 1);
    C = Operator_temp*A;
end