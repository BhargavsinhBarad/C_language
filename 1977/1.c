#include<stdio.h>

main()
{
	int r,c,i,j;
	printf("Enter row :");
	scanf("%d",&r);
	
	printf("Enter column : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Diagonal \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
		printf("Anti-diagonal  \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if((i+j)==(r-1))
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
}
