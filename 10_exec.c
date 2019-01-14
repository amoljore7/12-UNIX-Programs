//Program to demonstrate exec()
#include<stdio.h>
#include<unistd.h>

int main()
{
printf("Parent process is running\n");

if(fork() == 0) //code for child process
{
	int ret;
	printf("Before calling exec system call\n");
	ret = execl("./pid",NULL,NULL);
	if(ret == -1)
	{
		printf("Error in executing new process\n");
	}
	//Control will never come here.
}

return 0;
}
/*Output:
piyush@piyush-laptop:~/Desktop/process programs_26april$ gcc exec.c
piyush@piyush-laptop:~/Desktop/process programs_26april$ ./a.out
Parent process is running
Before calling exec system call
*/
