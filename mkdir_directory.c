// This program demonstates how to create new directory and how to delete
// directory

#include <sys/types.h>
#include <sys/stat.h>

int main()
{
int ret;

//In this case directory named as NewDirectory is created, 
// with read/write/search permissions for owner and group, and 
// with read/search permissions for others.

// mkdir() system call accept two parameters first as name of the directory
// and second is permissions for that new directory
ret = mkdir("NewDirectory", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
if(ret == -1)
{
	printf("Unable to create directory\n");
	return -1;
}

// After creating this directory there is only two entries as . and ..
// that represents its current directory and parent directory

// We can delete directory by using rmdir()
// rmdir() system call accept name of the directory to be remove
ret = rmdir("new");
if(ret == -1)
{
	printf("Unable to remove directory\n");
	return -1;
}

// If the directory contains files or other containts then we can not delete
// that directory by rmdir()

return 0;
}