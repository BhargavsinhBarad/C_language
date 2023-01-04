#include<stdio.h>

fact(int a)
{
	if(a<=1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
main()
{
	int n;
	printf("Enter your value : ");
	scanf("%d",&n);
	
	int a[n],b[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("Enetr a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=fact(a[i]);
	}
	
	printf("Factorial \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
