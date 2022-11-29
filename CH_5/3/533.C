#include<stdio.h>
#include<conio.h>

main()

{
	int a,b,c,d,e;
	clrscr();

	printf("a : ");
	scanf("%d",&a);
	printf("b : ");
	scanf("%d",&b);
	printf("c : ");
	scanf("%d",&c);
	printf("d : ");
	scanf("%d",&d);
	printf("e : ");
	scanf("%d",&e);
	(a>b)
		? (a>c)
			? (a>d)
				? (a>e)
					? printf("a is big.")
					: printf("e is big.")
				: (d>e)
					? printf("d is big.")
					: printf("e is big.")
			: (c>d)
				? (c>e)
					? printf("c is big.")
					: printf("e is big.")
				: (d>e)
					? printf("d is big.")
					: printf("e is big.")
		: (b>c)
			? (b>d)
				? (b>e)
					? printf("b is big.")
					: printf("e is big.")
				: (d>e)
					? printf("d is big.")
					: printf("e is big.")
			: (c>d)
				? (c>e)
					? printf("c is big.")
					: printf("e is big.")
				: (d>e)
					? printf("d is big.")
					: printf("e is big.");


	getch();
}