/*

This program demonstates working of wait.

Syntax :

pid_t wait(int *statloc);
Input parameter is the out parameter which returns exit status of the exited child.
It returns PID of child process which is terminated.

The wait function can block the parent until a child process terminates.
If the parent process calls wait then the resources allocated for the child process
gets destroyed.
But if there is no call to wait then child process are become zombie process.

*/

#include<stdio.h>

int main()
{
	int ret ;
	int status;

	// If child is running
	if(fork() == 0)
	{
		printf("child is running having PID %d\n",getpid());
	}

	// If parent is running
	else
	{
		// Call the function wait which wait till its child process termination.
		ret = wait(&status);

		if(ret != 0)
		{
			printf("processs of pid %d is killed with exit status %d\n",ret,status);
		}
	}

	return 0;
}