function [computerState, probFinal, algMatrix] = quantumComputer1(measuredQbits, initState) 
    qAlgorithm = ["RY|-pi/2" "RX|-pi/4" "U3|pi/6|-pi/2|-pi/9"];
    algorithm = algorithmPreprocess(qAlgorithm); %replacing Toffoli and swap gates with simpler gates
    %algorithm = toffoliAlgorithmPreprocess(qAlgorithm); %replacing Toffoli gates with simpler gates
    
    steps = size(algorithm,2);
    qbits = size(algorithm,1);    
    opParams = "";
    algMatrix = eye(2^qbits);
                    
    if nargin == 3
        computerState = initState;
        mBits = measuredQbits;
    end
    
    if nargin == 2
        computerState = initializeRegistersInt(qbits,0); %in case initState is empty, state |0...0> is set in
        mBits = measuredQbits;
    end
    
    if nargin == 2 || nargin == 3
        if size(mBits,2) > qbits
            error 'Number of measured q-bits is higher and number of q-bits used in algorithm.'
        end
    end
    
    if nargin == 1        
        computerState = initializeRegistersInt(qbits,0); %in case initState is empty, state |0...0> is set in
        mBits = 1:qbits; %measure all q-bits unless they are specified
    end  
    
    if qbits == log(size(computerState,1))/log(2)
        for k = 1:steps            
            stepOperator = eye(1); %initialize operator for step
            l = 1;            
            while l <= qbits
                if algorithm(l,k) ~= "." %single q-bit operator                    
                    opParams = split(algorithm(l,k),'|');                       
                    opParams(2:end) = lower(opParams(2:end)); %in case constants like a pi are used, these have to be expressed in lower case
                    while size(opParams) < 4
                        opParams(end + 1) = "0";
                    end
                    stepOperator = kron(stepOperator, getOperator(opParams(1),str2num(char(opParams(2))),str2num(char(opParams(3))),str2num(char(opParams(4)))));                    
                else %controled multi q-bit operator
                    m = 0;
                    while algorithm(l + m + 1,k) == ""                          
                        m = m + 1;
                    end
                    l = l + m + 1;
                    opParams = split(algorithm(l,k),'|');
                    while size(opParams) < 4
                        opParams(end + 1) = "0";
                    end
                    opParams(2:end) = lower(opParams(2:end)); %in case constants like a pi are used, these have to be expressed in lower case
                    stepOperator = kron(stepOperator, getControledOperator(opParams(1),m,str2num(char(opParams(2))),str2num(char(opParams(3))),str2num(char(opParams(4)))));
                end
                l = l + 1;
            end
            
            algMatrix = stepOperator*algMatrix; %calculate matrix describing the quantum algorithm
        end
    else
        error 'Different q-bits number in algorithm and initial state';
    end
    computerState = algMatrix*computerState; %calculate final computer state
    prob = abs(computerState).^2;    
    
    if size(mBits,2) == qbits %all q-bits are measured
        probFinal = prob;
        kk = qbits; 
    else  %only particular q-bits are measured
        kk = size(mBits,2);
        probFinal = zeros(2^kk,1);
        
        for k = 1:2^qbits
            binAddress = dec2bin(k-1, qbits); %state in binary representation           
            binAddress = binAddress(mBits); %measured q-bits are selected                         
            probFinal(bin2dec(binAddress)+1) = probFinal(bin2dec(binAddress)+1) + prob(k); %measured q-bits are converted to decimal to address vector of probabilities
        end
    end      
    
    %plotting results in histogram
    bar(categorical(cellstr(dec2bin(0:2^kk-1))),100*probFinal,'faceColor','r');
    text(1:2^kk, 100*probFinal, num2str(100*probFinal,'%0.1f %%'),'HorizontalAlignment','center','VerticalAlignment','bottom')
    ylim([0 100]);
    xlabel('State');
    ylabel('Probability (%)');
    title('Quantum register distribution');
end

function editedAlg = algorithmPreprocess(algorithm)   
    editedAlg = upper(algorithm); %operators are expresed in upper case    
    noOfToffolis = sum(sum(editedAlg == "TF",1)>0); %no of steps where Toffoli gate is used
    noOfSwaps = sum(sum(editedAlg == "SWP",1)>0); %no of steps where swap gate is used
    noOfToffAndSwp = sum((sum(editedAlg == "TF",1).*sum(editedAlg == "SWP",1))>0); %no of steps where swap or Toffoli gate is used
        
    if noOfSwaps + noOfToffolis > 0 %at least one Toffoli or swap gate is used => algorithm will be modified                        
        qbits = size(algorithm,1);
        steps = size(algorithm,2);
        algPrep(1:qbits,1:(steps + 13*noOfToffolis + 4 *(noOfSwaps - noOfToffAndSwp))) = "I"; 
       
        n = 1;
        for k = 1:steps
            algPrep(:,n) = editedAlg(:,k); %copy algorithm
            stepToff = sum(editedAlg(:,k) == "TF",1);
            stepSwap = sum(editedAlg(:,k) == "SWP",1)/2;
            
            if stepToff == 0 && stepSwap == 0 %neither Toffoli nor swap in k-th step, continue                
                n = n + 1;
            else                
                if stepToff ~= 0 %Toffoli processing
                    toffIndexes = 1:qbits;%positions of Toffoli gates
                    toffIndexes = toffIndexes(editedAlg(:,k) == "TF"); 
                    for m = 1:size(toffIndexes,2)       
                        toffoliBit = toffIndexes(m); 
                        l =  toffoliBit - 1;
                        while editedAlg(l,k) ~= "."
                            l = l - 1;
                        end                    
                        secControlBit = l;
                        l = l - 1;                    
                        while editedAlg(l,k) ~= "."
                            l = l - 1;
                        end
                        firstControlBit = l;
                        %Replace TF with its implementation by simpler single q-bit operators and CNOTs
                        algPrep(toffoliBit,n:n+13) = ["H" "X" "DT" "X" "T" "X" "DT" "X" "T" "H" "I" "I" "I" "I"];
                        algPrep(secControlBit,n:n+13) = ["I" "." "I" "" "I" "." "I" "" "I" "I" "T" "X" "DT" "X"];
                        algPrep(firstControlBit,n:n+13) = ["I" "I" "I" "." "I" "I" "I" "." "I" "I" "I" "." "T" "."];
                        %ensure proper syntax of algorithm - empty strings
                        %among controlled and target q-bits for CNOTs, no empty 
                        %spaces among non-controlled gates => I operator is inserted
                        algPrep((firstControlBit):(toffoliBit-1),n) = "I";
                        algPrep((firstControlBit+1):(toffoliBit-1),[n+3 n+7]) = "";
                        algPrep((secControlBit+1):(toffoliBit-1),[n+1 n+5]) = "";
                        algPrep((firstControlBit+1):(secControlBit-1),[n+11 n+13]) = "";                                     
                    end                                               
                end
                
                if stepSwap ~= 0 %swap preprocessing
                    swapsIndexes = 1:qbits;%positions of swap gates
                    swapsIndexes = swapsIndexes(editedAlg(:,k) == "SWP");
                    
                    for m = 1:2:size(swapsIndexes,2)
                        algPrep(swapsIndexes(m),n:n+4) = ["." "H" "." "H" "."];
                        algPrep(swapsIndexes(m+1),n:n+4) = ["X" "H" "X" "H" "X"];
                        algPrep((swapsIndexes(m)+1):(swapsIndexes(m+1)-1),[n n+2 n+4]) = "";
                    end
                end
                
                if stepToff ~= 0
                    n = n + 14;
                else
                    n = n + 5;
                end
            end
        end
        editedAlg = algPrep;
    end        
end

function op = getControledOperator(opName, l, theta, phi, lambda)
    baseOp = getOperator(opName, theta, phi, lambda);    
    N = 2^(l+2);    
    op = [eye(N/2) zeros(N/2); zeros(N/2) kron(eye(N/4), baseOp)];    
end

function op = getOperator(opName, theta, phi, lambda)  
%The code returns matrix for requested single q-bit operator.
%EXP operator - matrix in exponent has to be defined as a global variable A
    global A;
    
    switch opName
        case 'I' 
            op = [1 0; 0 1];
        case 'X' 
            op = [0 1; 1 0];
        case 'Y'
            op = [0 -1i; 1i 0];
        case 'Z'
            op = [1 0; 0 -1];
        case 'H'    
            op = (1/sqrt(2))*[1 1; 1 -1];
        case 'S'
            op = [1 0; 0 1i];
        case 'T'
            op = [1 0; 0 exp(1i*pi/4)];
        case 'DS'
            op = [1 0; 0 -1i];
        case 'DT'
            op = [1 0; 0 exp(-1i*pi/4)];
        case 'U1'
            op = [1 0; 0 exp(1i*theta)];
        case 'U2'
            op = (1/sqrt(2))*[1 -exp(1i*theta); exp(1i*phi) exp(1i*(theta + phi))];
        case 'U3'
            op = [cos(theta/2) -exp(1i*lambda)*sin(theta/2); exp(1i*phi)*sin(theta/2) exp(1i*(lambda + phi))*cos(theta/2)];
        case 'RX'
            op = [cos(theta/2) -1i*sin(theta/2); -1i*sin(theta/2) cos(theta/2)];
        case 'RY'
            op = [cos(theta/2) -sin(theta/2); sin(theta/2) cos(theta/2)];
        case 'RZ'
            op = [exp(-1i*theta/2) 0; 0 exp(1i*theta/2)];
        case 'EXP'            
            op = expm(theta*A);
        otherwise
            error 'Uknown operator!'
    end
end

function q = initializeRegisters(varargin)    
    %init configuration - all bits set to |0>
    normalized = zeros(nargin,2); 
    normalized(:,1) = ones(nargin,1);
    
    for k = 1:nargin
        hlp = cell2mat(varargin(k)); %q-bits normalization
        normalized(k,:) = hlp/norm(hlp);
    end
    
    hlp = (normalized(1,:))';
    for k = 2:nargin
        hlp = kron(hlp,(normalized(k,:))'); %Tensor product to get final state
    end
    
    q = hlp;
end
function q = initializeRegistersInt(qbits, num)
    N = 2^qbits;
    if num + 1 <= N
        q = zeros(N,1);
        q(num + 1,1) = 1;
    else %error state        
        error (['Required number (', num2str(num),') is higher than maximal range for current number of q-bits: ', num2str(N - 1), '.']);
    end
end