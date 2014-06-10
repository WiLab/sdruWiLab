#include "testPHYTransmit.h"
#include "testPHYTransmit_initialize.h"
#include "testPHYTransmit_terminate.h"

#include "testPHYReceive_per.h"
#include "testPHYReceive_per_initialize.h"
#include "testPHYReceive_per_terminate.h"


#include <iostream>
#include <thread>
#include <unistd.h>
#include <string>

#define MSGLEN  64


void Process_RX(int *fd)
{



	char *c;
	//testPHYReceive_per_initialize();

	int k;
	for (k=0;k<100000;k++){
		// Initialization succeeded. Encrypt or decrypt.
		testPHYReceive_per(20);
		std::cout<<"RX Looped"<<std::endl;

	}

}

void Process_TX(int *fd)
{

	char *c;
	std::cout<<"TX Init"<<std::endl;
	testPHYTransmit_initialize();
	int k;
	for (k=0;k<100000;k++){
		// Initialization succeeded. Encrypt or decrypt.
		std::cout<<"TX Looped"<<std::endl;
		testPHYTransmit();
	}

	// Shut down the library and the application global state.
	//mxfree(objSDRuReceiver);
}



int main(){

//int	pid;
int     fd[2];
pid_t pid;
int     result;


//Creating a pipe
result = pipe (fd);
if (result < 0) {
	//failure in creating a pipe
	perror("pipe");
	exit (1);
}

//Creating a child process
pid = fork();
if (pid < 0) {
	//failure in creating a child
	perror ("fork");
	exit(2);
}
if (pid > 0) {
	pid = fork();
	if (pid > 0){
		std::cout<<"Parent"<<std::endl;
		char message[MSGLEN];
		while (1){
		    std::cout << "##################" << std::endl;
                    //Clearing the message buffer
                    memset (message, 0, sizeof(message));

                    //Reading message from the pipe
                    read (fd[0], message, sizeof(message));
                    printf("-- %s\n",message);
		    std::cout << "##################" << std::endl;
		}
		}
	else{
		std::cout<<"Child"<<std::endl;
		Process_TX( fd );
	}
}
else if (pid == 0) {
	std::cout<<"Child"<<std::endl;
	Process_RX( fd );
}

return 0;

}



