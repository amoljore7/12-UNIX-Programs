#include <fcntl.h>
#include <stdio.h>

char buf1[] = "First line";
char buf2[] = "Last line";

int main(void)
{
	int fd;
	if ((fd = creat("file.txt", 0x777)) < 0)
	{
		printf("Error");
	}

	if (write(fd, buf1, 10) != 10)
	{
		printf("Error");
	}

	if (lseek(fd, 16384, SEEK_SET) == -1)
	{
		printf("Error");
	}

	if (write(fd, buf2, 10) != 10)
	{
		printf("Error");
	}

	exit(0);
	return 0;
}
