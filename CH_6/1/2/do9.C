#include<stdio.h>
//#include<conio.h>

main()
{
	int n,fact=1;
//	clrscr();

	printf("Enter Ending num : ");
	scanf("%d",&n);

	do
	{
		fact=fact*n;
		n--;
	}
	while(1<=n);
	printf("Factorial is %d",fact);
//	getch();
}
