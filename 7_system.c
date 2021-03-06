/*

This program demonstates working of system function.

Syntax :
int system(const char *cmdstring);

It is used to execute a command string from within a program.
Passing command through system function is same as invoking command on shell.

system function is internally implemented as :-

int system(const char *cmdstring) \\ version without signal handling 
{
	pid_t pid;
	int status;

	if (cmdstring == NULL)
		return(1); \\ always a command processor with UNIX 
	if ((pid = fork()) < 0) 
	{
		status = -1; \\ probably out of processes 
	} 
	else if (pid == 0) 
	{ \\ child 
		execl("/bin/sh", "sh", "-c", cmdstring, (char *)0);
		_exit(127);	 \\execl error 
	} 
	else 
	{ \\ parent 
		while (waitpid(pid, &status, 0) < 0) 
		{
			if (errno != EINTR) 
			{
				status = -1; \\ error other than EINTR from waitpid() 
				break;
			}
		}
	}
	return(status);
}

When we call system function and pass command to execute it fork a new
process and execute shell.
And that command is passed to shell for execution.

*/

#include <stdio.h>

int	main( )
{
	// For each and every system function new shell is created.

	system("ls");

	system("man ls");

	system("date");
	
	return 0;
}