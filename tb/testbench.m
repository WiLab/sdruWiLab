function testbench( action,user,destination )


% Build command
found = 0;

%Run Stuff
switch action
    case 'runTX'
        action = ' "cd /home/sdruser/git/'+user+'/sdruOFDM/sdruMixed/;  screen -d -m -S Transmitter  /opt/MATLAB/R2013a/bin/matlab  -nodisplay -r'+' "cd tx_rx;runTX"';
        found = 1;
    case 'runRX'
        action = ' "cd /home/sdruser/git/'+user+'/sdruOFDM/sdruMixed/;  screen -d -m -S Receiver  /opt/MATLAB/R2013a/bin/matlab  -nodisplay -r'+' "cd tx_rx;runRX"';
        found = 1;
    case 'runRX'
        action = ' screen -dr Transmitter ';
        found = 1;
    case 'runRX'
        action = ' screen -dr Transmitter ';
        found = 1;
        
        
end
if found
    command = ['ssh  -t sdruser@',destination,' ',action];
    system(command);
end

%Sync Stuff
switch action
    case 'sync'
        command = 'rsync -zr --progress /root/git/'+user+'/ sdruser@'+destination+':~/git/'+user+'/'
        system(command);
        
        
end

%Kill Stuff
switch action
    case 'KillALL'
        command = ''
        system(command);
          
end



end
