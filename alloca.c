/* 

This program demonstates use of alloca().

Using alloca() function we can allocate memory dynamically on stack.
When our function returns there is no need to free this callocated memory

Syntax:
void *alloca(size_t size);

*/

#include <stdio.h>
#include<alloca.h>

int main()
{
	int *p = NULL;

	p = (int*)alloca(4);
	if(p == NULL)
	{
		printf("Unable to allocate memory on stack\n");
	}
	
	*p = 21;

	printf("Content at allocated memory is : %d\n",*p);

	// We can not call free function to free this memory.
	// free(p);

	return 0;
}
