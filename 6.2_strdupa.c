//Program to demonstrate strdupa().
#define _GNU_SOURCE
#include<string.h>
#include<unistd.h>
#include<stdio.h>

int main()
{
char arr[]="Hello world";
char *p,*q;

printf("Original string is %s\n",arr);

p = strdupa(arr);

printf("New copied string is %s\n",p);

q = strndupa(arr,5);

printf("New copied 5 characters from string is %s\n",q);

return 0;
}
/*Output:
ubuntu@ubuntu:~/Desktop/process programs$ gcc strdupa.c
ubuntu@ubuntu:~/Desktop/process programs$ ./a.out
Original string is Hello world
New copied string is Hello world
New copied 5 characters from string is Hello
*/
