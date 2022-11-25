#include<stdio.h>
#include<conio.h>

main()
{
	int m,n;
	clrscr();

	printf("m :");
	scanf("%d",&m);

	printf("n :");
	scanf("%d",&n);

	m=m+n;
	n=m-n;
	m=m-n;

	printf("m :%d\nn :%d",m,n);

	getch();
}