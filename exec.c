#include<stdio.h>
#include<unistd.h>

int main()
{
printf("Parent process is running\n");

if(fork() == 0)
{
	int ret;
	printf("Before calling exec system call\n");
	ret = execl("./pid",NULL,NULL);
	if(ret == -1)
	{
		printf("Error in executing new process\n");
	}
}
return 0;
}
