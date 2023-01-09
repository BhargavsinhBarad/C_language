#include<stdio.h>


main()
{
	int i,j,n;
	
	printf("Enter your Array size : ");
	scanf("%d",&n);
	
	int a[n];
	int *p;
	
	p=&a;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<*(p+i);j++)
		{
			if(j*j==*(p+i))
			{
				printf("%d : %d\n",*(p+i),j);
			}
		}
	}
}  
