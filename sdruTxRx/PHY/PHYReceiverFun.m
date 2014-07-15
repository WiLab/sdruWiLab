function PHYReceiverFun(num)

fprintf('%d\n',int16(num));

RX = PHYReceiver;
%RX = PHYReceiver('HWAttached',true);
RX.HWAttached = true;
input = randi(48*4,1);

for k=1:10
	output = step(RX,input);
	fprintf('%d\n',int16(length(output)));
end

end
