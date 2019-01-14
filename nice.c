#include<stdio.h>
#include<unistd.h>

int main()
{
	int ret;

	printf("Default nice value of process is 0\n");
	ret = nice(0);

	printf("Current nice value is %d\n",ret);

	printf("Changing nice value of process by 5\n");
	ret = nice(5);

	printf("Current nice value is %d\n",ret);

	printf("Changing nice value of process by 4\n");
	ret = nice(4);

	printf("Current nice value is %d\n",ret);

	// range of nice value is -20 to 19
	return 0;
}
