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

	a=(x*x)-(2*x*y)+(y*y);

	printf("(x-y)^2=%d",a);

	getch();
}