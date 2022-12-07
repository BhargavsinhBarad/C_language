#include<stdio.h>
#include<conio.h>


main()

{

	int f,n,l;
	clrscr();

	printf("enter your number:");
	scanf("%d",&n);

	l=n%10;

	while(n>=10)
	{
		n=n/10;

	}
	printf("Addition is %d",n+l);
	getch();
}

