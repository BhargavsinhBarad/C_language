#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,a;
	clrscr();

	printf("x=");
	scanf("%d",&x);

	printf("y=");
	scanf("%d",&y);

	a=(x*x*x)-(3*(x*x)*y)+(3*x*(y*y))-(y*y*y);

	printf("(x+y)^3=%d",a);

	getch();
}