function receivedMessage = ReceiverOFDMA(receivedBits,desiredUser,dataType)
% ReceiverOFDMA     

objRx = RxOFDMA;
objRx.desiredUser = desiredUser;
objRx.dataType = dataType;

receivedMessage = step(objRx,receivedBits);

fprintf('\nHeader of received message: \n');
fprintf('%s\n\n', objRx.lastHeader);

end