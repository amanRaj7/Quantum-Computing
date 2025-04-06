
# Save off existing xsim.dir
if {[file exists xsim.dir] == 1} {
    set mtime [file mtime xsim.dir]
    set mtimestamp [clock format $mtime -format %Y%m%d_%H%M%S]
    set xsim_savefile "xsim.dir.$mtimestamp"
    file rename xsim.dir $xsim_savefile
}

 set hdlsrc {C:\Doc\github\Quantum\Code\matlab\two_qubit_system\codegen\quantumComputer_twoQubit\hdlsrc}
exec xvlog $hdlsrc/quantumComputer_twoQubit_fixpt.v

exec xelab quantumComputer_twoQubit_fixpt --timescale 1ps/1ps --override_timeunit --override_timeprecision -dll --snapshot design -debug wave 


