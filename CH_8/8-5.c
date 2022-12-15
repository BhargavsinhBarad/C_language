#include<stdio.h>

main()
{
	int n1,n2,i,j;
	
	printf("Enter value of n1 :");
	scanf("%d",&n1);
	printf("Enter value of n2 :");
	scanf("%d",&n2);
	
	int a[n1],b[n2],c[n1+n2];
	
	for(i=0;i<n1;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n1;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\n");
	
		for(i=0;i<n2;i++)
	{
		printf("b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n2;i++)
	{
		printf("%d ",b[i]);
	}
	
	printf("\n\n");
	
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(i=0,j=n1;i<n2,j<n1+n2;i++,j++)
	{
		c[j]=b[i];
	}
	for(i=0;i<n1+n2;i++)
	{
		printf("%d ",c[i]);
	}
	
}
