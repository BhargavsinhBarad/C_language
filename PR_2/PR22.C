#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("a : ");
	scanf("%d",&a);

	(a%2==0)
		? printf("even")
		: printf("odd");
	getch();
}