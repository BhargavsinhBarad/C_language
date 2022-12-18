#include<stdio.h>


main()
{
	int i,j,k,l,m;
	

	for(i=1;i<=5;i++)
	{
	for(k=1;k<=i;k++)
	{
		printf("%d",k);
	}
	for(j=i;j<5;j++)
	{
		printf(" ");
	}
	for(l=i;l<5;l++)
	{
		printf(" ");
	}
	for(m=i;m>=1;m--)
	{
		printf("%d",m);
	}
	printf("\n");
	}


	
}
