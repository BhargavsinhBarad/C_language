#include<stdio.h>
#include<cionio.h>

main() 
{

	int n, r = 0, re;
	clrscr();

	printf("Enter an integer: ");
	scanf("%d", &n);

	while (n != 0) 
	{
		re = n % 10;
		r = r* 10 + re;
		n /= 10;
	}

	printf("number = %d", r);
	getch();
  
}
