// This program will demonstrates : how to create hole inside the file.

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char buf1[] = "First line";
char buf2[] = "Last line";

int main(void)
{
	int fd;
	if ((fd = creat("file_hole.txt", 0x777)) < 0)
	{
		printf("Error");
	}
	// "file_hole.txt" gets created with rwx permissions for each and every group.

	if (write(fd, buf1, 10) != 10)
	{
		printf("Error");
	}

	if (lseek(fd, 16384, SEEK_SET) == -1)
	{
		printf("Error");
	}
	// lseek will reposition the file offset.

	if (write(fd, buf2, 10) != 10)
	{
		printf("Error");
	}
	// after execution of write system call "offset" will become "16394"
	exit(0);

	return 0;
}

/*
// for execution of this program :

-> ]$ gcc 5_File_Hole.c
-> ]$ ./a.out

// for verifying the repositioned offset type the following command on terminal.
-> ]$ ls -l file_hole.txt

*/
