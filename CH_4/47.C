#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,a,z;
	clrscr();

	printf("x=");
	scanf("%d",&x);

	printf("y=");
	scanf("%d",&y);

	printf("z=");
	scanf("%d",&z);


	a=(x*x)+(y*y)+(z*z)+((2*x*y)+(2*y*z)+(2*z*x));

	printf("(x+y+z)^2=%d",a);

	getch();
}