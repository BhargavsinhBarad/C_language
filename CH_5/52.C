#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("a :");
	scanf("%d",&a);

	if(a>0)
	{
		printf("Number is positive");
	}
	else if(a<0)
	{
		printf("Number is negitive");
	}
	else
	{
		printf("Number neutrl");
	}

	getch();
}