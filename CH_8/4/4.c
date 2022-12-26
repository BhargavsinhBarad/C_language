#include<stdio.h>
main()
{
	int r,c,i,j,r1=0,r2=0,r3=0;
	
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==0)
				r1+=a[i][j];
			else if(j==1)
				r2+=a[i][j];
			else if(j==2)
				r3+=a[i][j];		
		}
		printf("\n");
	}
	printf("1 ROW sum is %d\n",r1);
	printf("2 ROW sum is %d\n",r2);
	printf("3 ROW sum is %d\n",r3);
}
