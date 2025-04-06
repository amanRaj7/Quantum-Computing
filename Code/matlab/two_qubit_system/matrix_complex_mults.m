function C = matrix_complex_mults(A,B)
    A_temp = reshape(A,4,4);
    B_temp = reshape(B,4,4);
    C_temp = A_temp*B_temp;
    C = C_temp(:);
end