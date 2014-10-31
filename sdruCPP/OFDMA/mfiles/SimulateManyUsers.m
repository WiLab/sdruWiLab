function varargout = SimulateManyUsers(numUsers)


for k = 1:numUsers
    message = ['Hello',char(48+k)];
    varargout{k} = message;
end


end
