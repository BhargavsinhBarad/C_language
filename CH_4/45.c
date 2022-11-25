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


	a=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));

	printf("(x+y+z)^3=%d",a);

	getch();
}
