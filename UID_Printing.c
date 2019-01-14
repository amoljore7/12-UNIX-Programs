// This program prints the UID
// UID is 0 for the super user and other user has a UID other that zero
// This UID are maintained in file /etc/passwd file
// User can create group. Each group has unique group ID.
// Groups are normally used to collect users together into projects or 
// departments. This allows the sharing of resources, such as files, 
// among members of the same group.

#include <unistd.h>
#include <stdio.h>

int main()
{

printf("UID of the current loged in user is %d\n",getuid());

printf("Effective UID of the current loged in user is %d\n",geteuid());

printf("Group ID of the current loged in user is %d\n",getgid());

if (getuid() == 0)
{
	printf("You are logged in as super user\n");
}
else
{
	printf("You are not logged in as super user\n");	
}

return 0;
}