#include<stdio.h>
#include<string.h>
main()
{
	int sp=0,l=0,up=0,lw=0,sc=0,dg=0,dot=0,ae=0,i;
	char ps[20],em[100];
	
	printf("Enter your Email : ");
	gets(em);
	printf("Enter your password : ");
	gets(ps);
	
	for(i=0;i<strlen(em);i++)
	{
		if(em[i]==' ')
			sp++;
		else if(em[i]>=65&&em[i]<=90)
			up++;
		else if(em[i]>=97&&em[i]<=122)
			lw++;
		else if(em[i]>=48&&em[i]<=57)
			dg++;
		else if(em[i]=='@')
			ae++;
		else if(em[i]=='.')
			dot++;
	}
	if(sp==0 && up==0 && lw>=1 && dg>=1 && ae==1 && dot==1)
		printf("valid Email\n");
	else
		printf("Invalid Email...\n");
	
	sp=0;l=0;up=0;lw=0;sc=0;dg=0;

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
	if(sp==0 && l>=8 && up>=1 && lw>=1 && dg>=1 && sc>=1)
		printf("Valid password");
	else
		printf("Invalid password...");
	
}


	
