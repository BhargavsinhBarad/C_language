#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,c=0;
	clrscr();

	printf("N : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	       if(n%i==0)
	       {
			c++;
	       }
	}
	if(c==2)
		printf("prime");
	else
		printf("Not prime");

	getch();
}