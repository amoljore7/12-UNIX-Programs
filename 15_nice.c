//Program to demostrate nice().
//Priority = (CPU usage / constant) + base priority + nice value.
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
/*Output:
ubuntu@ubuntu:~/Desktop/process programs$ gcc nice.c
ubuntu@ubuntu:~/Desktop/process programs$ ./a.out
Default nice value of process is 0
Current nice value is 0
Changing nice value of process by 5
Current nice value is 5
Changing nice value of process by 4
Current nice value is 9
*/
