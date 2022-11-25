#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;
	clrscr();

	printf("x=");
	scanf("%d",&x);

	printf("y=");
	scanf("%d",&y);

	printf("(x+y)^2=%d",(x*x)+(2*x*y)+(y*y));

	getch();
}