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
