#include<stdio.h>
main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			if(j==5)
			 	printf("*");
			else
				printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			if(j!=i)
			{
				if(j==5)
					printf("*");
				else
					printf(" ");
		    }
		}
		printf("\n");
	}
}
