/*
	This program demonstates mapping of file into the memory
	mmap() system call map the file into the memory. Due to this our program can direct access the contents
	of file from the memory.
	mmap() maps the file in address space of currently running process.
*/

#include<sys/mman.h>	// for mmap system call
#include<stdio.h>
#include<fcntl.h>

int main()
{
	char *p;
	int fd, ret, i;

	fd = open("file.txt",O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}

	// This system call maps the contents of file into the address space of process

	p = mmap(0,20,PROT_READ,MAP_SHARED,fd,0);

	// First parameter :	Memory address at which we have o map the file
	// Second parameter :	Number of bytes to map
	// Third parameter :	Protection flag for the mapped memory
	// Fourth parameter :	Type of mapping (MAP_FIXED / MAP_PRIVATE / MAP_SHARED)
	// Fifth parameter :	File descriptor of file	
	// sixth parameter :	Offset from which we have to map the file	

	if(p == NULL)
	{
		printf("Unable to map the file\n");
		return -1;
	}
	// Read the contents of file which is mapped in the memory
	printf("Contents of file which is mapped in memory :\n");
	for(i = 0; i < 20; i++)
	{
		putchar(p[i]);
	}
	// unmap the memory
	ret = munmap(p,20);
	if(ret == -1)
	{
		printf("Unable to unmap the memory\n");
		return -1;
	}
	return 0;
}
