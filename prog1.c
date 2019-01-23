/*
Write a (single) C program that does the following:

*    creates a child process
*    parent process prints the child's process ID and exits
*    child executes /bin/ls and exits. print its pid and its parent pid
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <assert.h>

int main()
{
	//srand();
	pid_t childPid = fork();

	assert(childPid != -1);

	if(childPid==0)
	{

		printf("in Child process\n");;

		printf("My PID=%d \t parent PID=%d\n",getpid(),getppid());

		char* argList[] ={"ls","-la",NULL}; 
		execv("/bin/ls",argList);
		
		//printf("")

	}	
	else
	{
		printf("In Parent process... \nChildPID = %d\n",childPid);
	}
	
	return 0;
}

