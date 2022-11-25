#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("a :");
	scanf("%d",&a);

	printf("b :");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\na : %d\nb : %d",a,b);
	getch();
}