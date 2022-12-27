#include<stdio.h>
#include<string.h>
main()
{
	int sp=0,l=0,up=0,lw=0,sc=0,dg=0,i;
	char ps[20];
	
	printf("Enter your password : ");
	gets(ps);
	
	l=strlen(ps);
	
	for(i=0;i<l;i++)
	{
		if(ps[i]==' ')
			sp++;
		else if(ps[i]>=65&&ps[i]<=90)
			up++;
		else if(ps[i]>=97&&ps[i]<=122)
			lw++;
		else if(ps[i]<=48&&ps[i]<=57)
			dg++;
		else
			sc++;
	}
	if(sp==0 && l>=6 && up>=1 && lw>=1 && dg>=1 && sc>=1)
		printf("Valid password");
	else
		printf("Invalid password...");
	
}
