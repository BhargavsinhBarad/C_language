#include<stdio.h>
#include<string.h>

main()
{
	char a[30];
	int i,j,l;
	
	printf("Enter your string : ");
	gets(a);
	
	l=strlen(a);
	
	for(i=0;i<l;i++)
	{
		if(a[i]==a[i+1])
		{
			for(j=i;j<l;j++)
			{
				a[j]=a[j+1];
			}
			a[l-1]='\o';
		}
	}
	for(i=0;a[i]!='\o';i++)
	{
		printf("%c",a[i]);
	}
}
