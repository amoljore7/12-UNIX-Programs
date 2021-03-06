/*

This program demonstates working of waitpid.

Syntax :
pid_t waitpid(pid_t pid, int *statloc, int options);

When we call wait system call our parent process wait till its first child terminates.
If we have to wait for the termination of perticular child then we have to call wait
system call in loop.
To avoid this we can use waitpid() system call which waits till perticular child terminates.

First parameter is PID of a child for which we have to wait.
Second parameter is out parameter which indicates exit status of child.
Thid parameter is the opetions provided for waitpid.

pid == 1	Waits for any child process. In this respect, waitpid is equivalent to wait.
pid > 0		Waits for the child whose process ID equals pid.
pid == 0	Waits for any child whose process group ID equals that of the calling process.
pid < 1		Waits for any child whose process group ID equals the absolute value of pid.

*/

#include<stdio.h>

int main()
{
	int child_pid;
	int status;

	child_pid = fork();

	if (child_pid == 0) 
	{
		 printf("Child is running with PID %d\n",getpid());
	}
	else if (child_pid == -1) 
	{
		 printf("Unable to create child\n");
	}
	else
	{
		if (waitpid(child_pid, &status, 0) == child_pid) 
		{
			printf("Child is exited with PID %d and exit status is %d\n",child_pid,status);
		}
		else
		{
			printf("Error is waitpid\n");
		}
	}
}
