#include<stdio.h>
#include<conio.h>

main()
{
	int n,a,b=0,c=1;
	clrscr();

	printf("N : ");
	scanf("%d",&n);

	while(n!=0)
	{
		a=n%10;
		b=b+a;
		c=c*a;
		n=n/10;
	}
	if(b==c)
		printf("MAGIC NUMBER");
	else
		printf("NOT MAGIC NUMBER");
	getch();
}