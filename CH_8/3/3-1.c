#include<stdio.h>
main()
{
	int r,c;
	
	printf("Enter value of row :");
	scanf("%d",&r);
	
	printf("Enter value of column :");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
			sum +=a[i][j];
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
	printf("sum is %d",sum);
	
}
