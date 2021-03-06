/* This program demonstates Termination techniques of the process

Process can be terminated normally in 5 ways as 
1. Return from main
2. calling exit()
3. Calling _exit or _Exit
4. Returning from last thread
5. Calling pthread_exit()

When we run our program first C startup routine is called.
It is called in following manner
exit(main(argc, argv));

_exit() or _Exit() functions returns immediately to the kernel but
exit() function performs cleanup activity like cleaning the I/O library.

Returning return calue from main is same as exiting with same exit status.
means return 0; is same as exit(0);

We can check exit status of our program by using command
echo $?

*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Inside main\n");

	exit(0);	// 0 is exit status of our process

	return 0;	// It is same as exit(0);
}
