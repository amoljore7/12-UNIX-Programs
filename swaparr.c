#include<stdio.h>
int main()
{
int arr1[100];
int n,i,x;
printf("Enter the length of array\t");
scanf("%d",&n);
for (i=0;i<=n;i++)
	{
	printf("Enter the value of %d th member\t",i);
	scanf("%d",&arr1[i]);	
	}
for(i=0;i<=n/2;i++)
	{
	x=arr1[i];
	arr1[i]=arr1[n-i];
	arr1[n-i]=x;	
	}
for(i=0;i<=n;i++)
	{
	printf("%d th member of swapped array is %d\n",i,arr1[i]);
	}
return 0;
}
