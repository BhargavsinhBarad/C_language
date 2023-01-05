#include<stdio.h>
#include<string.h>
main()
{
	int n,i,len=0;
	
	printf("Enter N : ");
	scanf("%d",&n);
	
	char a[n][100];
	
	for(i=0;i<=n;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<=n;i++)
	{
		len += strlen(a[i]);
	}
	printf("Lenth is %d ",len);
}
