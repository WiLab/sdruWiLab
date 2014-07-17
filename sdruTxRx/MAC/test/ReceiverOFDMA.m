function receivedMessage = ReceiverOFDMA(receivedBits,desiredUser,dataType)
% ReceiverOFDMA  OFDMA receiver function for conversion from bits, error
% checking and user demultiplexing for 2 users.
%   receivedMessage = ReceiverOFDMA(receivedBits,desiredUser,dataType)
%   returns the received message of desiredUser from receivedBits as
%   characters, and displays it in the data type defined by dataType: 'c'
%   for character and 'u' for uint8.

objRx = RxOFDMA;
objRx.desiredUser = desiredUser;
objRx.dataType = dataType;

receivedMessage = step(objRx,receivedBits);

fprintf('\nMAC| Header of received message: \n');
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