#include<stdio.h>
#include<string.h>

main()
{
	char a[30];
	int i,j,l,c=0;
	int b[30];
	
	printf("Enter your string : ");
	gets(a);
	
	l=strlen(a);
	
	for(i=0;i<30;i++)
	{
		b[i]=0;
	}
	for(i=0;i<l;i++)
	{
		c=1;
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				b[j]=-1;
			}
		}
		if(b[i]==0)
		{
			b[i]=c;
		}
	}
	for(i=0;i<l;i++)
	{
		if(b[i]>0)
			printf("%c  =  %d\n",a[i],b[i]);
	}
	
}
