//Program to demonstrate getpriority() and setpriority().
#include<sys/resource.h>
#include<stdio.h>

int main()
{
	int ret;

	ret = getpriority(PRIO_PROCESS,0);

	printf("Process priority is %d\n",ret);

	ret = getpriority(PRIO_PGRP,0);

	printf("Process group priority is %d\n",ret);

	ret = getpriority(PRIO_USER,0);

	printf("User priority is %d\n",ret);

	printf("Setting prority of process\n");

	ret = setpriority(PRIO_PROCESS,0,10);

	if(ret == -1)
	{
		printf("Unable to set priority\n");
	}

	ret = getpriority(PRIO_PROCESS,0);

	printf("New Process priority is %d\n",ret);
	
	return 0;
}
/*Output:
ubuntu@ubuntu:~/Desktop/process programs$ gcc getpriority_setpriority.c
ubuntu@ubuntu:~/Desktop/process programs$ ./a.out
Process priority is 0
Process group priority is 0
User priority is -11
Setting prority of process
New Process priority is 10
*/
