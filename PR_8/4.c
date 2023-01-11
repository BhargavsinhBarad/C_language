#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	char *p[50];
	int i;
	for(i=0;i<50;i++)
	{
		p[i]= &a[i];
	}
	printf("Enter your string : ");
	gets(a);
	printf("lenth is %d",strlen(*p));
	
}
