#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
int main ()
{ 
pid_t child_pid;

child_pid = fork ();
if (child_pid > 0) 
{
	printf("Parent process PID : %d\n",getpid());
	sleep (60);
}
else 
{
	printf("Child process PID : %d\n",getpid());
	exit (0);
}
return 0;
}

