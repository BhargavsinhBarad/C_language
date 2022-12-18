#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==2||j==4)
				printf("0 ");
			else
				printf("1 ");
		}
		printf("\n");
	}
}
