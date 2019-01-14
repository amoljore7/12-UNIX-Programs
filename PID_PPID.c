
#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	pid_t pid;
	pid = getpid();
	
	printf("Parent process running of pid : %d\n",pid);
	pid = getppid();
	printf("Parent process pid : %d\n",pid);

	return 0;
}
