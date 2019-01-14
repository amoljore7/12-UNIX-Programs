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
	
	memcpy(q,p,strlen(p));
	
	printf("Copied string is %s\n",q);

return 0;
}
