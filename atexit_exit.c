#include<stdlib.h>
#include<stdio.h>

void Exit_Handler1()
{
	printf("Inside first exit handler\n");
}

void Exit_Handler2()
{
	printf("Inside second exit handler\n");
	exit(0);	// There is no effect of exit function in handler
}

void Exit_Handler3()
{
	printf("Inside third exit handler\n");
}

int main()
{
	printf("Demo of atexit() function\n\n");


	atexit(Exit_Handler3);
	atexit(Exit_Handler2);
	atexit(Exit_Handler1);

	exit(0);
	// When we call _exit() / _Exit() functions exit handlers are not invoked
}
