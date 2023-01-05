#include<stdio.h>

void sum(int a[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
		s += a[i];
	}
	printf("Sum is %d.",s);
}
main()
{
	int i,n;
	
	printf("Enter your Array size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	sum(a,n);
}
