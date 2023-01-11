#include<stdio.h>

void main()      
{
	int n,i;
	printf("N : ");
	scanf("%d",&n);
	
	int a[n];
	int *p[n];
	
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
		printf("a[%d] : ",i);
		scanf("%d",p[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*p[i]);
	}
}
