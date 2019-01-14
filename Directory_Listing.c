// This program gives same output as ls command

#include <dirent.h>
#include<stdio.h>

int main(void)
{
	char Name[255];
	DIR *dp;
	struct dirent *dirp;

	printf("Please enter valid path name\n");
	scanf("%s",Name);

	// The  opendir() function opens a directory stream corresponding to the directory name, and returns a pointer to the directory stream.
	if ((dp = opendir("/root/Desktop")) == NULL)
	{
		printf("Unable to open directory %s\n",Name);
	}

	printf("Contents inside directory %s",Name);
	//The readdir() function returns a pointer to a dirent structure representing the next directory entry in the directory stream pointed to by dirp.
	while ((dirp = readdir(dp)) != NULL)
	{
		printf("%s\n", dirp->d_name);
	}

	closedir(dp);
	return 0;
}
