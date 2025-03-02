function values = generazione_file_mif_hex(opName, theta, phi, lambda, initState)
    opName_hex = [opName.hex(1, :); opName.hex(2, :); opName.hex(3,:)];
    theta_hex = [theta.hex(1, :); theta.hex(2, :); theta.hex(3,:)];
    phi_hex = [phi.hex(1,:); phi.hex(2, :); phi.hex(3,:)];
    lambda_hex = [lambda.hex(1,:); lambda.hex(2,:); lambda.hex(3,:)];

    initState_real = real(initState);
    initState_imag = imag(initState);
    initState_real_hex = [initState_real.hex(1,:); initState_real.hex(2,:)];
    initState_imag_hex = [initState_imag.hex(1, :); initState_imag.hex(2,:)];

    ram_size = 16;
    word_size = 16;

    values = upper([opName_hex; theta_hex; phi_hex; lambda_hex;initState_real_hex; initState_imag_hex]);
    fileID = fopen('init_mem.mif', 'w');
    fprintf(fileID, '%s%d%s\n', 'WIDTH=', word_size, ';');
    fprintf(fileID, '%s%d%s\n\n', 'Depth=', ram_size, ';');
    fprintf(fileID, '%s\n', 'ADDRESS_RADIC=UNS;');
    fprintf(fileID, '%s\n\n', 'DATA_RADIX=HEX;');
    fprintf(fileID, '%s\n', 'CONTENT BEGIN');

    idx = 0;
    for ii = 1:ram_size

        fprintf(fileID, '   %u  :   %s;\n', idx, values(idx+1, 1:4));
        idx = idx+1;
    end
    fprintf(fileID, '%s\n', 'END;');
    fclose(fileID);

    cmd = '...\intelFPGA_lite\19.1\quartus\bin64\mif2hexinit_mem.mif init_mem.hex';
    system(cmd);
end
