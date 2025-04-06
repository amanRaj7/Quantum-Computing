function localLogData(out_computerState, out_probFinal, out_probQubit0, out_probQubit1, out_ref_computerState, out_ref_probFinal, out_ref_probQubit0, out_ref_probQubit1)
global gEMLSimLogVal_out_computerState;
global gEMLSimLogVal_out_probFinal;
global gEMLSimLogVal_out_probQubit0;
global gEMLSimLogVal_out_probQubit1;
global gEMLSimLogVal_out_ref_computerState;
global gEMLSimLogVal_out_ref_probFinal;
global gEMLSimLogVal_out_ref_probQubit0;
global gEMLSimLogVal_out_ref_probQubit1;
global gEMLSimLogRunIdx;
persistent maxIdx;

if isempty(gEMLSimLogRunIdx)
	gEMLSimLogRunIdx = 1;
	maxIdx = 1;
	if isstruct(out_computerState)
		gEMLSimLogVal_out_computerState = out_computerState;
	elseif isscalar(out_computerState)
		gEMLSimLogVal_out_computerState = out_computerState;
	elseif iscolumn(out_computerState)
		gEMLSimLogVal_out_computerState = out_computerState.';
	elseif isrow(out_computerState)
		gEMLSimLogVal_out_computerState = out_computerState;
	else
		gEMLSimLogVal_out_computerState = {out_computerState};
	end

	if isstruct(out_probFinal)
		gEMLSimLogVal_out_probFinal = out_probFinal;
	elseif isscalar(out_probFinal)
		gEMLSimLogVal_out_probFinal = out_probFinal;
	elseif iscolumn(out_probFinal)
		gEMLSimLogVal_out_probFinal = out_probFinal.';
	elseif isrow(out_probFinal)
		gEMLSimLogVal_out_probFinal = out_probFinal;
	else
		gEMLSimLogVal_out_probFinal = {out_probFinal};
	end

	if isstruct(out_probQubit0)
		gEMLSimLogVal_out_probQubit0 = out_probQubit0;
	elseif isscalar(out_probQubit0)
		gEMLSimLogVal_out_probQubit0 = out_probQubit0;
	elseif iscolumn(out_probQubit0)
		gEMLSimLogVal_out_probQubit0 = out_probQubit0.';
	elseif isrow(out_probQubit0)
		gEMLSimLogVal_out_probQubit0 = out_probQubit0;
	else
		gEMLSimLogVal_out_probQubit0 = {out_probQubit0};
	end

	if isstruct(out_probQubit1)
		gEMLSimLogVal_out_probQubit1 = out_probQubit1;
	elseif isscalar(out_probQubit1)
		gEMLSimLogVal_out_probQubit1 = out_probQubit1;
	elseif iscolumn(out_probQubit1)
		gEMLSimLogVal_out_probQubit1 = out_probQubit1.';
	elseif isrow(out_probQubit1)
		gEMLSimLogVal_out_probQubit1 = out_probQubit1;
	else
		gEMLSimLogVal_out_probQubit1 = {out_probQubit1};
	end

	if isstruct(out_ref_computerState)
		gEMLSimLogVal_out_ref_computerState = out_ref_computerState;
	elseif isscalar(out_ref_computerState)
		gEMLSimLogVal_out_ref_computerState = out_ref_computerState;
	elseif iscolumn(out_ref_computerState)
		gEMLSimLogVal_out_ref_computerState = out_ref_computerState.';
	elseif isrow(out_ref_computerState)
		gEMLSimLogVal_out_ref_computerState = out_ref_computerState;
	else
		gEMLSimLogVal_out_ref_computerState = {out_ref_computerState};
	end

	if isstruct(out_ref_probFinal)
		gEMLSimLogVal_out_ref_probFinal = out_ref_probFinal;
	elseif isscalar(out_ref_probFinal)
		gEMLSimLogVal_out_ref_probFinal = out_ref_probFinal;
	elseif iscolumn(out_ref_probFinal)
		gEMLSimLogVal_out_ref_probFinal = out_ref_probFinal.';
	elseif isrow(out_ref_probFinal)
		gEMLSimLogVal_out_ref_probFinal = out_ref_probFinal;
	else
		gEMLSimLogVal_out_ref_probFinal = {out_ref_probFinal};
	end

	if isstruct(out_ref_probQubit0)
		gEMLSimLogVal_out_ref_probQubit0 = out_ref_probQubit0;
	elseif isscalar(out_ref_probQubit0)
		gEMLSimLogVal_out_ref_probQubit0 = out_ref_probQubit0;
	elseif iscolumn(out_ref_probQubit0)
		gEMLSimLogVal_out_ref_probQubit0 = out_ref_probQubit0.';
	elseif isrow(out_ref_probQubit0)
		gEMLSimLogVal_out_ref_probQubit0 = out_ref_probQubit0;
	else
		gEMLSimLogVal_out_ref_probQubit0 = {out_ref_probQubit0};
	end

	if isstruct(out_ref_probQubit1)
		gEMLSimLogVal_out_ref_probQubit1 = out_ref_probQubit1;
	elseif isscalar(out_ref_probQubit1)
		gEMLSimLogVal_out_ref_probQubit1 = out_ref_probQubit1;
	elseif iscolumn(out_ref_probQubit1)
		gEMLSimLogVal_out_ref_probQubit1 = out_ref_probQubit1.';
	elseif isrow(out_ref_probQubit1)
		gEMLSimLogVal_out_ref_probQubit1 = out_ref_probQubit1;
	else
		gEMLSimLogVal_out_ref_probQubit1 = {out_ref_probQubit1};
	end

	gEMLSimLogRunIdx = gEMLSimLogRunIdx+1;
	return

end

if gEMLSimLogRunIdx > maxIdx
	maxIdx = 2 * maxIdx;
	if(iscell(gEMLSimLogVal_out_computerState))
		gEMLSimLogVal_out_computerState(maxIdx, :) = {gEMLSimLogVal_out_computerState{1}};
	else
		gEMLSimLogVal_out_computerState(maxIdx, :) = gEMLSimLogVal_out_computerState(1);
	end
	if(iscell(gEMLSimLogVal_out_probFinal))
		gEMLSimLogVal_out_probFinal(maxIdx, :) = {gEMLSimLogVal_out_probFinal{1}};
	else
		gEMLSimLogVal_out_probFinal(maxIdx, :) = gEMLSimLogVal_out_probFinal(1);
	end
	if(iscell(gEMLSimLogVal_out_probQubit0))
		gEMLSimLogVal_out_probQubit0(maxIdx, :) = {gEMLSimLogVal_out_probQubit0{1}};
	else
		gEMLSimLogVal_out_probQubit0(maxIdx, :) = gEMLSimLogVal_out_probQubit0(1);
	end
	if(iscell(gEMLSimLogVal_out_probQubit1))
		gEMLSimLogVal_out_probQubit1(maxIdx, :) = {gEMLSimLogVal_out_probQubit1{1}};
	else
		gEMLSimLogVal_out_probQubit1(maxIdx, :) = gEMLSimLogVal_out_probQubit1(1);
	end
	if(iscell(gEMLSimLogVal_out_ref_computerState))
		gEMLSimLogVal_out_ref_computerState(maxIdx, :) = {gEMLSimLogVal_out_ref_computerState{1}};
	else
		gEMLSimLogVal_out_ref_computerState(maxIdx, :) = gEMLSimLogVal_out_ref_computerState(1);
	end
	if(iscell(gEMLSimLogVal_out_ref_probFinal))
		gEMLSimLogVal_out_ref_probFinal(maxIdx, :) = {gEMLSimLogVal_out_ref_probFinal{1}};
	else
		gEMLSimLogVal_out_ref_probFinal(maxIdx, :) = gEMLSimLogVal_out_ref_probFinal(1);
	end
	if(iscell(gEMLSimLogVal_out_ref_probQubit0))
		gEMLSimLogVal_out_ref_probQubit0(maxIdx, :) = {gEMLSimLogVal_out_ref_probQubit0{1}};
	else
		gEMLSimLogVal_out_ref_probQubit0(maxIdx, :) = gEMLSimLogVal_out_ref_probQubit0(1);
	end
	if(iscell(gEMLSimLogVal_out_ref_probQubit1))
		gEMLSimLogVal_out_ref_probQubit1(maxIdx, :) = {gEMLSimLogVal_out_ref_probQubit1{1}};
	else
		gEMLSimLogVal_out_ref_probQubit1(maxIdx, :) = gEMLSimLogVal_out_ref_probQubit1(1);
	end
end

if isstruct(out_computerState)
	gEMLSimLogVal_out_computerState(gEMLSimLogRunIdx, :) = out_computerState;
elseif isscalar(out_computerState)
	gEMLSimLogVal_out_computerState(gEMLSimLogRunIdx, :) = out_computerState;
elseif iscolumn(out_computerState)
	gEMLSimLogVal_out_computerState(gEMLSimLogRunIdx, :) = out_computerState.';
elseif(isrow(out_computerState))
	gEMLSimLogVal_out_computerState(gEMLSimLogRunIdx, :) = out_computerState;
else
	gEMLSimLogVal_out_computerState(gEMLSimLogRunIdx, :) = {out_computerState};
end

if isstruct(out_probFinal)
	gEMLSimLogVal_out_probFinal(gEMLSimLogRunIdx, :) = out_probFinal;
elseif isscalar(out_probFinal)
	gEMLSimLogVal_out_probFinal(gEMLSimLogRunIdx, :) = out_probFinal;
elseif iscolumn(out_probFinal)
	gEMLSimLogVal_out_probFinal(gEMLSimLogRunIdx, :) = out_probFinal.';
elseif(isrow(out_probFinal))
	gEMLSimLogVal_out_probFinal(gEMLSimLogRunIdx, :) = out_probFinal;
else
	gEMLSimLogVal_out_probFinal(gEMLSimLogRunIdx, :) = {out_probFinal};
end

if isstruct(out_probQubit0)
	gEMLSimLogVal_out_probQubit0(gEMLSimLogRunIdx, :) = out_probQubit0;
elseif isscalar(out_probQubit0)
	gEMLSimLogVal_out_probQubit0(gEMLSimLogRunIdx, :) = out_probQubit0;
elseif iscolumn(out_probQubit0)
	gEMLSimLogVal_out_probQubit0(gEMLSimLogRunIdx, :) = out_probQubit0.';
elseif(isrow(out_probQubit0))
	gEMLSimLogVal_out_probQubit0(gEMLSimLogRunIdx, :) = out_probQubit0;
else
	gEMLSimLogVal_out_probQubit0(gEMLSimLogRunIdx, :) = {out_probQubit0};
end

if isstruct(out_probQubit1)
	gEMLSimLogVal_out_probQubit1(gEMLSimLogRunIdx, :) = out_probQubit1;
elseif isscalar(out_probQubit1)
	gEMLSimLogVal_out_probQubit1(gEMLSimLogRunIdx, :) = out_probQubit1;
elseif iscolumn(out_probQubit1)
	gEMLSimLogVal_out_probQubit1(gEMLSimLogRunIdx, :) = out_probQubit1.';
elseif(isrow(out_probQubit1))
	gEMLSimLogVal_out_probQubit1(gEMLSimLogRunIdx, :) = out_probQubit1;
else
	gEMLSimLogVal_out_probQubit1(gEMLSimLogRunIdx, :) = {out_probQubit1};
end

if isstruct(out_ref_computerState)
	gEMLSimLogVal_out_ref_computerState(gEMLSimLogRunIdx, :) = out_ref_computerState;
elseif isscalar(out_ref_computerState)
	gEMLSimLogVal_out_ref_computerState(gEMLSimLogRunIdx, :) = out_ref_computerState;
elseif iscolumn(out_ref_computerState)
	gEMLSimLogVal_out_ref_computerState(gEMLSimLogRunIdx, :) = out_ref_computerState.';
elseif(isrow(out_ref_computerState))
	gEMLSimLogVal_out_ref_computerState(gEMLSimLogRunIdx, :) = out_ref_computerState;
else
	gEMLSimLogVal_out_ref_computerState(gEMLSimLogRunIdx, :) = {out_ref_computerState};
end

if isstruct(out_ref_probFinal)
	gEMLSimLogVal_out_ref_probFinal(gEMLSimLogRunIdx, :) = out_ref_probFinal;
elseif isscalar(out_ref_probFinal)
	gEMLSimLogVal_out_ref_probFinal(gEMLSimLogRunIdx, :) = out_ref_probFinal;
elseif iscolumn(out_ref_probFinal)
	gEMLSimLogVal_out_ref_probFinal(gEMLSimLogRunIdx, :) = out_ref_probFinal.';
elseif(isrow(out_ref_probFinal))
	gEMLSimLogVal_out_ref_probFinal(gEMLSimLogRunIdx, :) = out_ref_probFinal;
else
	gEMLSimLogVal_out_ref_probFinal(gEMLSimLogRunIdx, :) = {out_ref_probFinal};
end

if isstruct(out_ref_probQubit0)
	gEMLSimLogVal_out_ref_probQubit0(gEMLSimLogRunIdx, :) = out_ref_probQubit0;
elseif isscalar(out_ref_probQubit0)
	gEMLSimLogVal_out_ref_probQubit0(gEMLSimLogRunIdx, :) = out_ref_probQubit0;
elseif iscolumn(out_ref_probQubit0)
	gEMLSimLogVal_out_ref_probQubit0(gEMLSimLogRunIdx, :) = out_ref_probQubit0.';
elseif(isrow(out_ref_probQubit0))
	gEMLSimLogVal_out_ref_probQubit0(gEMLSimLogRunIdx, :) = out_ref_probQubit0;
else
	gEMLSimLogVal_out_ref_probQubit0(gEMLSimLogRunIdx, :) = {out_ref_probQubit0};
end

if isstruct(out_ref_probQubit1)
	gEMLSimLogVal_out_ref_probQubit1(gEMLSimLogRunIdx, :) = out_ref_probQubit1;
elseif isscalar(out_ref_probQubit1)
	gEMLSimLogVal_out_ref_probQubit1(gEMLSimLogRunIdx, :) = out_ref_probQubit1;
elseif iscolumn(out_ref_probQubit1)
	gEMLSimLogVal_out_ref_probQubit1(gEMLSimLogRunIdx, :) = out_ref_probQubit1.';
elseif(isrow(out_ref_probQubit1))
	gEMLSimLogVal_out_ref_probQubit1(gEMLSimLogRunIdx, :) = out_ref_probQubit1;
else
	gEMLSimLogVal_out_ref_probQubit1(gEMLSimLogRunIdx, :) = {out_ref_probQubit1};
end

gEMLSimLogRunIdx = gEMLSimLogRunIdx+1;

