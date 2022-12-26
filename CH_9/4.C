#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int i;
	
	printf("Enter your name : ");
	scanf("%[^\n]",str);
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=97&&str[i]<=122)
		{
			str[i] -=32;
		}
	}
	printf("%s",str);
}
