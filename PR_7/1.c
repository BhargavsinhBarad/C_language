#include<stdio.h>

int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
main()
{
	int n;
	
	printf("Enter your Number : ");
	scanf("%d",&n);
	
	printf("Factorial is %d.",fact(n));
}
