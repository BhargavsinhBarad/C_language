#include<stdio.h>
main()
{
	int r,c,i,j,s=0;
	
	printf("Enter Row : ");
	scanf("%d",&r);
	printf("Enter Column : ");
	scanf("%d",&c);
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);			
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j||i+j==r-1)
			{
				printf("%d",a[i][j]);
				s+=a[i][j];
			}
			else
				printf(" ");		
		}
		printf("\n");
	}
	printf("sum is %d",s);
}
