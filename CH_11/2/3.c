#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int i;
	char *p[20];
	
	printf("Enter your name : ");
	gets(str);
	for(i=0;i<strlen(*p);i++)
	{
		p[i]=&str[i];
	}

	for(i=0;i<strlen(*p);i++)
	{
		if(*p[i]>=65&&*p[i]<=90)
		{
			*p[i] +=32;
		}
		else if(*p[i]>=97&&*p[i]<=122)
		{
			*p[i] -=32;
		}
	}
	printf("%s",str);
}
