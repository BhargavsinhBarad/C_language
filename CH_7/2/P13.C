#include<stdio.h>
#include<conio.h>

main()
{
	char i,j,k;
	clrscr();

	for(i='A';i<='E';i++)
	{
		for(k='A';k<='E'-i;k++)
		{
			printf(" ");
		}
		for(j=i;j>='A';j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	getch();

}