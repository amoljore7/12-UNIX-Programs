/* 
This program demonstates command line arguments.

When we run our program internally exec() system call gets invoked
that system call can pass the command line arguments to our running process.

main has the first two arguments which are used to pass command line arguments to our process.
int main(int argc, char*argv[]);
where argc is the number of command-line arguments, and argv is an array of pointers to the
arguments.

Use below commands to run on linux
gcc CommandLine_Arguments
./a.out hello new 10 20

Use below settings on visual studio
Project -> Properties -> Debugging -> Command Arguments -> Set the arguments

*/


#include<stdio.h>


int main(int argc , char *argv[])
{
	int i;

	printf("Demo of command line arguments\n");

	for (i = 0; i < argc; i++) 
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}
		return 0;
}
