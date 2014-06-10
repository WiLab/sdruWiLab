function result = WriteDataToPipe(pointer)


if ~exist('Obj')
fprintf('Creating Obj\n');
persistent Obj;
Obj = CreateObj;
end

result = 'HelloFromMATLAB';

fprintf('Waiting\n');
pause(10);
fprintf('Done\n');



end

