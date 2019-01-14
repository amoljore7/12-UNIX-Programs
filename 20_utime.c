// This program demonstates about utime function

/*
struct utimebuf
{
	time_t actime;
	time_t modtime;
};
*/

#include<stdio.h>
#include<utime.h>

int main()
{
	int ret;
	struct utimbuf obj;

	ret = utime("new.txt",&obj);
	if(ret == -1)
	{
		printf("Uable to access times\n");
	}

	printf("%d\n",obj.modtime);

	return 0;
}
