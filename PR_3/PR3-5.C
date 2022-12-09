#include<stdio.h>
#include<conio.h>

main()
{
	int a,n,b=0,c;
	clrscr();

	printf("N : ");
	scanf("%d",&n);

	c=n;

	do
	{
		a=n%10;
		b=(b*10)+a;
		n=n/10;
	}
	while(n!=0);

	printf("num is %d\n",b);

	if(b==c)
		printf("palidrome\n");
	else
		printf("not palidrome");

	getch();
}