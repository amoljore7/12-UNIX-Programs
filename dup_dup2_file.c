// This program demonstate use of dup and dup2 system calls...

// dup or dup2 is used to duplicate the file descriptor which is priorly returned by open of creat system call.
// New duplicate file descriptor will point to the same file table entry.
// We can perform the same file operations by using this duplicate file descriptor...

#include <fcntl.h>
#include<stdio.h>

int main(void)
{
	int fd1,fd2;
	int ret;

	// If file is opened in read mode
	fd1 = open("file.txt",O_RDWR);
	if(fd1 == -1)
	{
		printf("Unable to open file \n");
		return -1;
	}
	// The new file descriptor returned by dup is guaranteed to be the 
	// lowest-numbered available file descriptor.
	fd2 = dup(fd1);

	printf("\nOld file descriptor is %d and duplicate file descriptor is %d",fd1,fd2);

	// To close the file completely we have to close all its file descriptors
	close(fd1);
	close(fd2);

	// dup2 system call accept expected parameter from the user as a second parameter.
	// If second parameter fd is already open, it is first closed. If first 
	// and second parameters are same, then dup2 returns second 
	// parameter without closing it.
	// dup2 system call performs its operations in atomic way.

	fd1 = open("file.txt",O_RDWR);
	if(fd1 == -1)
	{
		printf("Unable to open file \n");
		return -1;
	}

	fd2 = dup2(fd1,8);

	printf("\nOld file descriptor is %d and duplicate file descriptor is %d\n",fd1,fd2);

	return 0;
}
