//Program to demonstrate time().
#include <time.h>
#include <stdio.h>
     
#define SIZE 256
     
int main (void)
{
char buffer[SIZE];
time_t curtime;
struct tm *loctime;

// Get the current time.
curtime = time (NULL);

// Convert it to local time representation.
loctime = localtime (&curtime);

// Print out the date and time in the standard format.
fputs (asctime (loctime), stdout);


strftime (buffer, SIZE, "Today is %A, %B %d.\n", loctime);
fputs (buffer, stdout);
strftime (buffer, SIZE, "The time is %I:%M %p.\n", loctime);
fputs (buffer, stdout);

return 0;
}
/*Output:
ubuntu@ubuntu:~/Desktop/process programs$ gcc time.c
ubuntu@ubuntu:~/Desktop/process programs$ ./a.out
Sat Apr 26 15:56:25 2014
Today is Saturday, April 26.
The time is 03:56 PM.
*/
