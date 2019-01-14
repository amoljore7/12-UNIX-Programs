// This program prints the UID

#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd;

	// Creating new file
	// If the file does not exist it will be created.  The owner (user ID) of the file is set to the effective user ID of the process.
	// open() and creat() return the new file descriptor, or -1 if an error occurred.

	fd = creat("second.txt",0x777);

	if(fd == -1)
	{
		printf("Unable to create the file\n");
	}
	else
	{
		printf("File is successfully created with file descriptor %d \n",fd);
	}

	// closing the file.
	close(fd);
}
