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
