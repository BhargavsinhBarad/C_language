#include<stdio.h>
main()
{
	int n,i;
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
			printf("%d ",a[i]);
	}
}
