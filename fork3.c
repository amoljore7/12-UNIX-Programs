/*
This program demonstates working of fork.

Parent and child shares the same files opened.

*/

#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd;

	// Open file in read and write mode
	fd = open("file.txt",O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return 0;
	}

	// If child is running
	if(fork() == 0)
	{
		// Write a line into the file
		write(fd,"Line written by child",21);
	}
	// If parent is running
	else
	{
		// Write a line into the file
		write(fd,"Line written by Parent",22);
	}

	return 0;
}