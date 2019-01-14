#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void handler(int);

int main()
{
// Register handler function for user defined signal

signal(SIGUSR1,handler);

signal(SIGUSR2,handler);

for(; ;)
	pause();	// This function wait till arrival of signal

return 0;
}

void handler(int no)
{
	if(no == SIGUSR1)
	{
		printf("First user defined signal is arrived\n");
	}
	if(no == SIGUSR2)
	{
		printf("Second user defined signal is arrived\n");
	}
}

/*
Run this program asynchronously as
./a.out &
Now send the signal from command line by using kill command as
kill -USR1 1121

kill -USR2 1121

1121 is PID of our process.
*/
