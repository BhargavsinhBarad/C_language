#include<stdio.h>
#include<conio.h>

main()
{
	int c=0,n;
	clrscr();

	printf("N : ");
	scanf("%d",&n);

	while(n!=0)
	{
		n=n/10;
		c++;
	}

	printf("digit is %d",c);
	getch();

}