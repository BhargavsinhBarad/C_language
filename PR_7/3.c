#include<stdio.h>

void len(char a[])
{
	printf("lenth is %d.",strlen(a));
}
main()
{
	char a[30];
	
	printf("Enter your string : ");
	gets(a);
	len(a);
}
