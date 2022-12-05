#include<stdio.h>
#include<conio.h>

main()
{
	int n,fact=1;
	clrscr();

	printf("Enter Ending num : ");
	scanf("%d",&n);

	while(1<=n)
	{
		fact=fact*n;
		n--;
	}
	printf("Factorial is %d",fact);
	getch();
}