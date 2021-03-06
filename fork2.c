/*
This program demonstates working of forrk.

When we call fork parent and child process get separate copy of stack, data and heap which is
explained by the given program.

But text section is shared between parent and child.

*/

#include<stdio.h>

// Create a variable whose memory gets allocated in data section
int global = 30;

int main()
{
	// Create a variable whose memory gets allocated in stack
	int local = 10;

	// Create a variable whose memory gets allocated in heap
	int *p = (int*)malloc(4);
	*p = 40;

	// If child is running
	if(fork() == 0)
	{
		// Changing value of local and global variable
		local = 11;
		global = 31;
		*p = 50;
		printf("Child with PID %d \n",getpid());
		printf("Value of local variable %d , global %d , heap %d of child process\n",local,global,*p);
		
	}
	// If parent is running
	else
	{
		printf("Parent with PID %d \n",getpid());
		printf("Value of local variable %d , global %d , heap %d of parent process\n",local,global,*p);
	}

	return 0;
}