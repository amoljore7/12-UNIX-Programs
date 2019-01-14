// This program demonstate creation of hard link.

#include<unistd.h>
#include<fcntl.h>

int main()
{
int ret;

// This function creates new directory entry of filename newfile.txt
// But inode of file.txt and newfile.txt is same
// If one of the file is changed that change get reflect in another file.
// If newfile.txt is already exists it returns error.

ret = link("file.txt","newfile.txt");
if(ret == -1)
{
	printf("Unable to create hard lisnk\n");
	return -1;
}
// After calling link system call link count gets incremented in our case it become 2.
// To drop that link count we can system call unlink

// To unlink we have write and execute permission for the directory
// in which our file resides.

ret = unlink("newfile.txt");
if(ret == -1)
{
	printf("Unable to unlink the file\n");
	return -1;
}

// After unilnk if the link count drops to zero then data of the file is removed.
 
// We can not use unlink sysstem call for the directory for that purpose we have 
// to use rmdir() or remove() system call

// remove() system call for file is same as unlink()
// remove() system call for directory is same as rmdir()

ret = remove("file.txt");
if(ret == -1)
{
	printf("Unable to remove the file\n");
	return;
}
return 0;
}