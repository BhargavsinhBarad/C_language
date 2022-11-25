#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter a :");
	scanf("%d",&a);

	printf("Enter b :");
	scanf("%d",&b);

	if(a<b)
	{
		printf("a is min");
	}
	else
	{
		printf("b is min");
	}

	getch();
}
