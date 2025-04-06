% loggingMode - mode of operation : either read or log
%#codegen
%#internal
function loggedData = quantumComputer_twoQubit_fixpt_logger(varargin)
    coder.inline( 'never' );
    coder.extrinsic( 'MException', 'throw' );
    persistent iterCount
    if isempty( iterCount )
        iterCount = 0;
    end
    if nargin>0
        % Log the data.
        opName_0_TB_logger( varargin{ 1 } );
        theta_0_TB_logger( varargin{ 2 } );
        phi_0_TB_logger( varargin{ 3 } );
        lambda_0_TB_logger( varargin{ 4 } );
        opName_1_TB_logger( varargin{ 5 } );
        theta_1_TB_logger( varargin{ 6 } );
        phi_1_TB_logger( varargin{ 7 } );
        lambda_1_TB_logger( varargin{ 8 } );
        initState_0_TB_logger( varargin{ 9 } );
        initState_1_TB_logger( varargin{ 10 } );
        computerState_TB_logger( varargin{ 11 } );
        probFinal_TB_logger( varargin{ 12 } );
        probQubit0_TB_logger( varargin{ 13 } );
        probQubit1_TB_logger( varargin{ 14 } );
        iterCount = iterCount + 1;
        loggedData = [  ];
        if iterCount>=Inf
            throw( MException( 'Coder:FXPCONV:MATLABSimBailOut', 'Return early for input computation' ) );
        end
        return
    else
        % Fetch the data.
        % make sure the 'log setup' has been performed
        assert( ~isempty( iterCount ) );
        loggedData.inputs.opName_0 = opName_0_TB_logger();
        loggedData.inputs.theta_0 = theta_0_TB_logger();
        loggedData.inputs.phi_0 = phi_0_TB_logger();
        loggedData.inputs.lambda_0 = lambda_0_TB_logger();
        loggedData.inputs.opName_1 = opName_1_TB_logger();
        loggedData.inputs.theta_1 = theta_1_TB_logger();
        loggedData.inputs.phi_1 = phi_1_TB_logger();
        loggedData.inputs.lambda_1 = lambda_1_TB_logger();
        loggedData.inputs.initState_0 = initState_0_TB_logger();
        loggedData.inputs.initState_1 = initState_1_TB_logger();
        loggedData.outputs.computerState = computerState_TB_logger();
        loggedData.outputs.probFinal = probFinal_TB_logger();
        loggedData.outputs.probQubit0 = probQubit0_TB_logger();
        loggedData.outputs.probQubit1 = probQubit1_TB_logger();
        loggedData.iterCount = iterCount;
    end
end
function out = opName_0_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = theta_0_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = phi_0_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = lambda_0_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = opName_1_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = theta_1_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = phi_1_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = lambda_1_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = initState_0_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = initState_1_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = computerState_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = probFinal_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = probQubit0_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = probQubit1_TB_logger(v)
    coder.inline( 'never' );
    persistent p
    coder.varsize( 'p' );
    if nargin==1
        if isempty( p )
            p = loggableValue( v );
        elseif size( v, 1 )>1
            p = [ p; loggableValue( v ) ];
        else
            p = [ p, loggableValue( v ) ];
        end
    else
        assert( ~isempty( p ) );
        out = p;
        p( : ) = [  ];
    end
end
function out = loggableValue(in)
    coder.inline( 'always' );
    if isenum( in )
        out = double( in );
    else
        out = in;
    end
end
