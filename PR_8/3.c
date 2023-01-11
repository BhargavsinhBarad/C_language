#include<stdio.h>

void main()
{
	int n,i,j;
	printf("N : ");
	scanf("%d",&n);
	
	int a[n],b[n];
	int *p[n];
	int *q[n];
	
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
		q[i]=&b[i];
		printf("a[%d] : ",i);
		scanf("%d",p[i]);
	}
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		*q[i]=*p[j];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*q[i]);
	}
}
