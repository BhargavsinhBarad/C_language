#include<stdio.h>
#include<string.h>

main()
{
	char a[30],b[30];
	
	printf("Enter your string : ");
	gets(a);
	
	strcpy(b,a);
	strrev(b);
	
	if(strcmp(a,b)==0)
	{
		printf("Your string is palidrom.");
	}
	else
		printf("Your string is Non palidrom.");
}
