/* 
This program demonstates exit handler.

exit handlers are the functions which are automatically called by exit().
We can regiter this exit handler functions by using atexit() function.
We can register 32 such exit handlers.
Sytax of atexit()

int atexit(void (*func)(void));

Exit handlers are executed in reverse order in which they are registered.

*/


#include<stdio.h>
#include<stdlib.h>

void ExitHandler1()
{
	printf("Inside ExitHandler1\n");
}

void ExitHandler2()
{
	printf("Inside ExitHandler2\n");
}

void ExitHandler3()
{
	printf("Inside ExitHandler3\n");
}

void ExitHandler4()
{
	printf("Inside ExitHandler4\n");
}

int main()
{
	printf("Inside main\n");

	atexit(ExitHandler1);
	atexit(ExitHandler2);
	atexit(ExitHandler3);
	atexit(ExitHandler4);

	return 0;
}
