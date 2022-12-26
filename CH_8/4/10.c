#include<stdio.h>
main()
{
	int i,j,s=0;
	int a[5][5];
	
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j]=1;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);			
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==0||i==4||j==0||j==4)
			{
				printf(" ");	
			}
			else
			{
				printf("%d",a[i][j]);
				s+=a[i][j];
			}		
		}
		printf("\n");
	}
	printf("sum is %d",s);
}
