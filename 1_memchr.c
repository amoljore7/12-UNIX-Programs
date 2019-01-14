//Program to demonstrate memchr()
#include<string.h>
#include<unistd.h>
#include<stdio.h>
#include<malloc.h>

int main()
{
	char *p = NULL;
	char *q = NULL;
	int ret;

	p = (char*)malloc(10);
	if(p == NULL)
	{
		printf("Unable ton allocate memory\n");
		return -1;
	}
	
	strcpy(p,"new stri5ng");

	q = memchr(p,'5',strlen(p));
	
	printf("Digit 5 is found at position %ld\n",q-p);

return 0;
}
/*Output:
ubuntu@ubuntu:~/Desktop/process programs$ gcc memchr.c
ubuntu@ubuntu:~/Desktop/process programs$ ./a.out
Digit 5 is found at position 8
*/
