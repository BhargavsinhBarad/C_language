#include<stdio.h>

ans()
{
	int a;
	
	printf("A : ");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	{
		printf("Number is divisibale");
	}
	else
	{
		printf("Number is not divisibale");
	}
}
main()
{
	ans();
}
