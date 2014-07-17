function receivedMessage = ReceiverOFDMA(receivedBits,desiredUser,dataType)
% ReceiverOFDMA  OFDMA receiver function for conversion from bits, error
% checking and user demultiplexing for 2 users.
%   receivedMessage = ReceiverOFDMA(receivedBits,desiredUser,dataType)
%   returns the received message of desiredUser from receivedBits as
%   characters, and displays it in the data type defined by dataType: 'c'
%   for character and 'u' for uint8.

obj = RxOFDMA;
obj.desiredUser = desiredUser;
obj.dataType = dataType;

receivedMessage = step(obj,receivedBits);

end