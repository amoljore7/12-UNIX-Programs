//Program to demonstrate vfork().
#include<unistd.h>
#include<stdio.h>

int global = 20;	// data section
int main()
{
	int no = 10;	// stack section
	if(vfork() == 0)
	{
		printf("Child created by vfork\n");
		no++;
		global++;
		
		_exit(0);
	}
	printf("PArent process running\n");
	printf("Value of local variable is %d and of global variable is %d\n",no,global);
return 0;
}
/*Output:
ubuntu@ubuntu:~/Desktop/process programs$ gcc vfork.c
ubuntu@ubuntu:~/Desktop/process programs$ ./a.out
Child created by vfork
PArent process running
Value of local variable is 11 and of global variable is 21
*/
