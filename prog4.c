/*
*	Write a program to fork 10 children. Each process should print its own pid and exit.
*/

#include <sys/types.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int arr[] = {1,2,3,4,5,6,7,8,9,10};

int main()
{
	//fprintf(stderr,"Hello World!\n");
	
	for(int i=0;i<10;i++)
	{
		if(fork()==0)
		{
			//srand(time(0));
			sleep(arr[i]);
			fprintf(stderr,"about to die=%d\n",getpid());
			exit(1);
		}

	}	
	wait(NULL);
	return 0;
}
