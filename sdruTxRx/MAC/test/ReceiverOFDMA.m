function receivedMessage = ReceiverOFDMA(receivedBits,desiredUser,dataType)
% ReceiverOFDMA

objRx = RxOFDMA;
objRx.desiredUser = desiredUser;
objRx.dataType = dataType;

receivedMessage = step(objRx,receivedBits);

fprintf('\nHeader of received message: \n');
switch dataType
    case 'c'
        fprintf('%s \n', char(objRx.lastHeader));
    case 'u'
        for k = 1:length(objRx.lastHeader)
            fprintf('%d \n', int8(objRx.lastHeader(k)));
        end
    otherwise
        fprintf('MAC| Undefined data type');
end

end