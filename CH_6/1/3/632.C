#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,c=0;
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
		printf("Number is Prime");
	else
		printf("Number is not prime");

	getch();
}
