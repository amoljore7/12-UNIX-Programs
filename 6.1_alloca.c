//Program to demonstrate the funtioning of alloca()
#include<alloca.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>

int main()
{
	char *p;
	//alloca() dynamically allocates the memory on the stack
	p = (char *)alloca(10);

	printf("Address of our local variable from statck is %p\n",&p);

	printf("By using alloca memory allocated in stack segment at address %p \n",p);
	strcpy(p,"abcdefghi");
	
	printf("Contents at allocated memory is %s\n ",p);

	return 0;
}
/*Output
ubuntu@ubuntu:~/Desktop/process programs$ gcc alloca.c
ubuntu@ubuntu:~/Desktop/process programs$ ./a.out
Address of our local variable from statck is 0xbffbb13c
By using alloca memory allocated in stack segment at address 0xbffbb100 
Contents at allocated memory is abcdefghi
*/
