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

	(a>b)
		? (b>c) ? printf("c is small") : printf("b is small")
		: (a>c) ? printf("c is small") : printf("a is small");

	getch();
}