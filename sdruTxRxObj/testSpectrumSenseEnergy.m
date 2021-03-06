function testSpectrumSenseEnergy

[...
    ObjAGC,...           %Objects
    ObjSDRuReceiver,...
    ObjSDRuTransmitter,...
    ObjDetect,...
    ObjPreambleDemod,...
    ObjDataDemod,...
    estimate,...         %Structs
    tx,...
    timeoutDuration,...  %Values/Vectors
    messageBits...
    ] = CreateTXRX_2;

while true
    decision = SpectrumSenseEnergy( ObjAGC, ObjSDRuReceiver, tx );
    fprintf('Decision: %d\n',int16(decision));
end

end