#!/usr/bin/python
import os
import argparse

parser = argparse.ArgumentParser(description='Testbed control script.')

parser.add_argument('-dest', dest='destination', help = 'Provide hostname (assuming in hostfile) or ip')
parser.add_argument('-act', dest='action', help = 'Provide the action: killTX/killRX runTX/runRX viewTX/viewRX sync')
parser.add_argument('-u', dest='user', help = 'Provide username for machine')

parser.add_argument('-g', dest='gitRoot', help = 'Location of git repo')
parser.add_argument('-sl', dest='scriptLocation', help = 'Location of script, relative to gitRoot')
parser.add_argument('-sn', dest='scriptName', help = 'Name of MATLAB script to run')
parser.add_argument('-sc', dest='startupCommands', help = 'Additional Commands to run at MATLAB startup')
parser.add_argument('-bn', dest='branchName', help = 'Name of git branch you wish to run from, only valid with changeBranch action')

args = parser.parse_args()

#matlabRoot = '/opt/MATLAB/R2013a/bin/matlab'
matlabRoot = '/usr/local/bin/matlab'

if not (args.action and args.destination and args.user):
        parser.print_help()
        sys.exit(2)

os.system('echo "hello" >> ~/log.txt')

# Sync repos
if args.action == 'sync':
        #command = 'rsync -zr --progress /root/git/'+args.user+'/ sdruser@'+args.destination+':~/git/'+args.user+'/'
        command = 'rsync -zr --progress '+args.gitRoot+' sdruser@'+args.destination+':~/git/'+args.user+'/'
	#os.system('echo '+command+'>> ~/log.txt')
	#print command
        os.system(command)

# Run node
if args.action == 'runTest':
        sshCommand = 'ssh  sdruser@'+args.destination+' "cd '+args.gitRoot+';  '
        screenCommand = 'screen -d -m -S '+args.scriptName+'  '+matlabRoot+'  -nodisplay -r'+" '"+args.startupCmd+" ;cd "+args.scriptLocation+';'+args.startupCommands+';'+args.scriptName+"'"+'"'
        command = sshCommand + screenCommand
        #print command
        os.system(command)

if args.action =='changeBranch':
        sshCommand = 'ssh  sdruser@'+args.destination+' "cd '+args.gitRoot+';  '
	changeCommand1 = 'git checkout HEAD^;'
	changeCommand2 = 'git checkout -f '+args.branchName+'"'
        command = sshCommand + changeCommand1 + changeCommand2
	os.system(command)


if args.action == 'runTX':
        command = 'ssh  sdruser@'+args.destination+' "cd /home/sdruser/git/'+args.user+'/sdruWiLab/sdruTxRx/;  screen -d -m -S Transmitter  /opt/MATLAB/R2013a/bin/matlab  -nodisplay -r'+" 'cd tx_rx;runTX'"+'"'
        os.system(command)

if args.action == 'runRX':
        command = 'ssh  sdruser@'+args.destination+' "cd /home/sdruser/git/'+args.user+'/sdruWiLab/sdruTxRx/;  screen -d -m -S Receiver  /opt/MATLAB/R2013a/bin/matlab  -nodisplay -r'+" 'cd tx_rx;runRX'"+'"'
        os.system(command)

if args.action == 'killallp':
        #command = 'ssh  -t sdruser@'+args.destination+' screen -X -S Receiver kill'
        command = 'ssh  -t sdruser@'+args.destination+'" '+"for session in $(screen -ls | grep -o '[0-9]*\.Receiver'); do screen -S $$.Receiver -X quit; done"+'"'
        command = 'ssh  -t sdruser@'+args.destination+" '"+'for session in $(screen -ls | grep -o "[0-9]*\.Receiver"); do screen -S "${session}" -X quit; done'+"'"
        command = 'ssh  -t sdruser@'+args.destination+" '"+'for session in $(screen -ls | grep -o "[0-9]*"); do screen -S "${session}" -X quit; done'+"'"
        print command
        os.system(command)

# Deprecated
if args.action == 'killTX':
        command = 'ssh  -t sdruser@'+args.destination+' screen -X -S Transmitter kill'
        os.system(command)

if args.action == 'viewTX':
        command = 'ssh  -t sdruser@'+args.destination+' screen -dr Transmitter '
        os.system(command)

if args.action == 'viewRX':
        command = 'ssh  -t sdruser@'+args.destination+' screen -dr Receiver '
        os.system(command)

# Calibration (To be fixed)
if args.action == 'runFreqCalTx':
        command = 'ssh  sdruser@'+args.destination+' "cd /home/sdruser/git/'+args.user+'/sdruWiLab/;  screen -d -m -S Transmitter  /opt/MATLAB/R2013a/bin/matlab  -nodisplay -r'+" 'cd sdruCalib;builder_tx'"+'"'
        os.system(command)

if args.action == 'runFreqCalRx':
        command = 'ssh  sdruser@'+args.destination+' "cd /home/sdruser/git/'+args.user+'/sdruWiLab/;  /opt/MATLAB/R2013a/bin/matlab  -nodisplay -r'+" 'cd sdruCalib;FreqCalRxBuildRun'"+'"'
        os.system(command)
