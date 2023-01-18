#include<stdio.h>
#include<string.h>

main()
{
	char str[20],str2[20];
	int ans;
	gets(str);
	
	strcpy(str,str2);
	ans=strcmp(str,str2);
	
	if(ans==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
