#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,f=1;
	clrscr();

	printf("N : ");
	scanf("%d",&n);

	for(i=1;n>=i;n--)
	{
		f=f*n;
	}

	printf("fact is : %d",f);
	getch();
}