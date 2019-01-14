//Program to demonstrate sbrk().
#include<stdio.h>
#include<unistd.h>

int main()
{
	char *p,*q;

	printf("Current break value is %p\n",sbrk(0));
	
	p = (char*)sbrk(10);

	printf("Memory allocated  at address : %p\n",p);

	printf("Now after memory allocation Current break value is %p\n",sbrk(0));

	sbrk(-10);	// free the above allocated memory

	printf("Now after freeing memory allocation Current break value is %p\n",sbrk(0));

	return 0;
}
/*Output:
ubuntu@ubuntu:~/Desktop/process programs$ gcc sbrk.c
ubuntu@ubuntu:~/Desktop/process programs$ ./a.out
Current break value is 0x975d000
Memory allocated  at address : 0x975d000
Now after memory allocation Current break value is 0x975d00a
Now after freeing memory allocation Current break value is 0x975d000
*/
