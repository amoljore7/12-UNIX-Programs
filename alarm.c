#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void alarm_handler(int no)
{
	printf("Cought signal no %d",no);
}

int main()
{
	signal(SIGALRM, alarm_handler);
	alarm(10);	// set alarm for 10 seconds

	pause(); // This function is used to wait till any signal arrive
return 0;
}
