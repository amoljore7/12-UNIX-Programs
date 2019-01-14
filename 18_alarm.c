//Program to demonstrate alarm().
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

//This funtion will be invoked by signal() when the perticular signal is occur.
void alarm_handler(int no)
{
	printf("Caught signal no %d",no);
}

int main()
{
	//signal() is used to register the signal handler function for a specific signal
	signal(SIGALRM, alarm_handler);
	alarm(10);	// set alarm for 10 seconds

	pause(); // This function is used to wait till any signal arrive
return 0;
}
/*Output
ubuntu@ubuntu:~/Desktop/process programs$ gcc alarm.c 
ubuntu@ubuntu:~/Desktop/process programs$ ./a.out
Caught signal no 14
*/
