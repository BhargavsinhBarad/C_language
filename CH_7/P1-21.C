#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	char k;
	clrscr();

	for(i=1;i<=5;i++)
	{
		k='A';
		for(j=1;j<=i;j++)
		{
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
	getch();
}