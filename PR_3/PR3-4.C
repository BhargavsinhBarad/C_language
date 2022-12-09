#include<stdio.h>
#include<conio.h>

main()
{
	int a,n;
	clrscr();

	printf("N : ");
	scanf("%d",&n);
	a=n%10;

	while(n>10)
	{
		n=n/10;
	}

	printf("Addition is %d",a+n);
	getch();
}