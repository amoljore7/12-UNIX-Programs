//Program to demonstrate memcmp()
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
	
	strcpy(p,"new string");

	q = (char*)malloc(10);
	if(q == NULL)
	{
		printf("Unable ton allocate memory\n");
		return -1;
	}
	
	strcpy(q,"new string");

	ret = memcmp(p,q,strlen(p));
	if(ret == 0)
	{
		printf("Both the memory locations contains same data\n");
	}


return 0;
}
/*Output:
ubuntu@ubuntu:~/Desktop/process programs$ gcc memcmp.c
ubuntu@ubuntu:~/Desktop/process programs$ ./a.out
Both the memory locations contains same data
*/
