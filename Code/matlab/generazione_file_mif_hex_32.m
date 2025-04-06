 function values = generazione_file_mif_hex_32(opName_0, theta_0, phi_0, lambda_0, opName_1, theta_1, phi_1, lambda_1, initState_0, initState_1)
    opName_0_hex = [opName_0.hex(1, :); opName_0.hex(2, :); opName_0.hex(3,:)];
    theta_0_hex = [theta_0.hex(1, :); theta_0.hex(2, :); theta_0.hex(3,:)];
    phi_0_hex = [phi_0.hex(1,:); phi_0.hex(2, :); phi_0.hex(3,:)];
    lambda_0_hex = [lambda_0.hex(1,:); lambda_0.hex(2,:); lambda_0.hex(3,:)];

    opName_1_hex = [opName_1.hex(1, :); opName_1.hex(2, :); opName_1.hex(3,:)];
    theta_1_hex = [theta_1.hex(1, :); theta_1.hex(2, :); theta_1.hex(3,:)];
    phi_1_hex = [phi_1.hex(1,:); phi_1.hex(2, :); phi_1.hex(3,:)];
    lambda_1_hex = [lambda_1.hex(1,:); lambda_1.hex(2,:); lambda_1.hex(3,:)];

    initState_0_real = real(initState);
    initState_0_imag = imag(initState);
    initState_0_real_hex = [initState_0_real.hex(1,:); initState_0_real.hex(2,:)];
    initState_0_imag_hex = [initState_0_imag.hex(1, :); initState_0_imag.hex(2,:)];

    initState_1_real = real(initState);
    initState_1_imag = imag(initState);
    initState_1_real_hex = [initState_1_real.hex(1,:); initState_1_real.hex(2,:)];
    initState_1_imag_hex = [initState_1_imag.hex(1, :); initState_1_imag.hex(2,:)];

    ram_size = 32;
    word_size = 16;

    values = upper([opName_0_hex; theta_0_hex; phi_0_hex; lambda_0_hex; opName_1_hex; theta_1_hex; phi_1_hex; lambda_1_hex; initState_0_real_hex; initState_0_imag_hex; initState_1_real_hex; initState_1_imag_hex]);
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
