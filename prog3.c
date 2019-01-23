/*
*	Write a program to fork 10 children. Each process should print its own pid and exit.
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <assert.h>

int main()
{
	fprintf(stderr,"Hello World!\n");
	fork();	
	return 0;
}
