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

getrlimit(RLIMIT_AS ,&robj);

printf("%ld",robj.rlim_cur);

return 0;
}
