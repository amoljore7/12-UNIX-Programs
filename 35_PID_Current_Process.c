// When we run this program it will print PID of our process.
// getpid() function returns PID of currently running process
// Run this program multiple time to check diffrent PID.

#include<stdio.h>

int main()
{

printf("PID of this running process id %d",getpid());

return 0;
}