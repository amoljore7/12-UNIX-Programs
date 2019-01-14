//Program to demonstrate wait().
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main()
{
int status;
pid_t pid;

if(fork() == 0)
{	
	printf("Child process running\n");
	printf("PID of child process is %d\n",getpid());
	
	return 1;

	// abort(); this function abort itself by sending signal SIGABRT having no 6
}

pid = wait(&status);

printf("Child process having PID %d terminates with exit status %d\n",pid,status);

if(WIFEXITED(status))
{
	printf("Normal termination with exit status %d\n",WEXITSTATUS(status));
}
if(WIFSIGNALED(status))
{
	printf("Killed by signal %d\n",WTERMSIG(status));
}

return 0;
}
/*Output:
ubuntu@ubuntu:~/Desktop/process programs$ gcc wait.c
ubuntu@ubuntu:~/Desktop/process programs$ ./a.out
Child process running
PID of child process is 5788
Child process having PID 5788 terminates with exit status 256
Normal termination with exit status 1
*/
