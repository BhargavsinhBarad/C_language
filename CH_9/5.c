#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int i;
	
	printf("Enter your name : ");
	scanf("%[^\n]",str);
	if(str[0]>=97&&str[0]<=122)
	{
		str[0] -=32;
	}
	for(i=1;i<strlen(str);i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			str[i] +=32;
		}
	}
	printf("%s",str);
}
