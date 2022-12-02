#include<stdio.h>
#include<conio.h>

main()
{
	char a;
	clrscr();

	printf("a : ");
	scanf("%d",&a);

	if(a>='A'&&a<'Z'||a>='a'&&a<='z')
	{
		printf("char");
	}
	else if(a>='0'||a<='9')
	{
		printf("Number");
	}
	else
	{
		printf("s char");
	}
	getch();
}