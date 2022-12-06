#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,fact=1;
	clrscr();

	printf("n : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		fact=fact*i;
	}

	printf("factorial is %d",fact);
	getch();
}