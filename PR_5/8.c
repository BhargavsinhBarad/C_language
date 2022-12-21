#include<stdio.h>
main()
{
	int r,c,i,j,s=0;
	
	printf("Enter of Row : ");
	scanf("%d",&r);
	printf("Enter of column : ");
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
			if(i==j)
			{
			
				printf("%d ",a[i][j]);
				s=s+a[i][j];
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("sum is %d",s);
}
