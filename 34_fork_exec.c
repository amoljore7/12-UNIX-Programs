#include <sys/wait.h>
int main(void)
{
char buf[MAXLINE]; /* from apue.h */
pid_t pid;
int status;

fgets(buf, MAXLINE, stdin); 

if (buf[strlen(buf) - 1] == "\n")
buf[strlen(buf) - 1] = 0; /* replace newline with null */
if ((pid = fork()) < 0) 
{
printf("Error in fork")
} 
else if (pid == 0) 
{
 /* child */
execlp(buf, buf, (char *)0);
}
/* parent */
if ((pid = waitpid(pid, &status, 0)) < 0)
printf("Error is waitpid");


}