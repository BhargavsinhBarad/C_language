#include<stdio.h>

main()
{
	int i,j,n,s=0;
	
	printf("Enter N : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
			s += i;
			printf("%d ",s);
		}
	}
	
}
