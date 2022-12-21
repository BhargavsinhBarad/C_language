#include<stdio.h>
main()
{
	int r,c,i,j;
	
	printf("Enter of Row : ");
	scanf("%d",&r);
	printf("Enter of column : ");
	scanf("%d",&c);
	
	
	int a[r][c],b[r][c],d[r][c];
	
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
}
