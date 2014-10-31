function PlotMe(data)

persistent UDPSender

if isempty(UDPSender)
    UDPSender = dsp.UDPSender('RemoteIPPort',4014,'RemoteIPAddress','127.0.0.1');
end

maxsize = 1000;
d = 0;
for x=1:maxsize:length(data)-maxsize
    toSend = data(x:x+maxsize-1);
    pause(1);
    step(UDPSender,toSend);
end

release(UDPSender);

end