#include<stdio.h>

void main()
{
	FILE *f,*fp;
	char str[20];
	f=fopen("C:\\Users\\R22\\Desktop\\f1.txt","r");
	fp=fopen("C:\\Users\\R22\\Desktop\\f2.txt","w");
	
	if(f==NULL)
	{
		printf("ERROR!!...");	
	}
	else
	{
		fgets(str,200,f);
		fprintf(fp,"Data from file : %s",str);
	}
	fclozse(f);
	fclose(fp);
	
}
