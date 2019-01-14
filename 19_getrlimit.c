//Program to demonstrate getrlimit().
#include<stdio.h>
#include<sys/resource.h>
#include<sys/time.h>
#include<sys/types.h>
/*
struct rlimit     
{
	rlim_t rlim_cur;	
	rlim_t rlim_max;
};*/
int main()
{
struct rlimit robj;
getrlimit(RLIMIT_CORE ,&robj);

printf("%ld",robj.rlim_max);

return 0;
}
/*Output:
*/
