#include<stdio.h>
main()
{
	int r,c,i,j,l=0;
	
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
			l++;
		}
		printf("\n");
	}
	printf("lenth is %d",l);
}
