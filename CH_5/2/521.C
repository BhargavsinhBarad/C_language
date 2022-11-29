#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();

	printf("a : ");
	scanf("%d",&a);
	printf("b : ");
	scanf("%d",&b);
	printf("c : ");
	scanf("%d",&c);

	if(a>b)
	{
		if(b>c)
		{
			printf("c is small");
		}
		else
		{
			printf("b is small");
		}
	}
	else
	{
		if(a>c)
		{
			printf("c is small");
		}
		else
		{
			printf("a is small");
		}
	}
	getch();
}