/*
*	Write a program to fork 10 children. Each process should print its own pid and exit.
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <assert.h>

int main()
{
	//srand();
	pid_t childPid;

	assert(childPid != -1);

	for(int i=0;i<10;i++)
	{
		childPid = fork();

		if(childPid!=0)
			break;	

	}
	printf("%d\n",getpid());
	return 0;
}

