#include<stdio.h>
#include<conio.h>

main()
{
	char i,j,k;
	clrscr();

	for(i='E';i>='A';i--)
	{
		for(k=i;k<='E';k++)
		{
			printf(" ");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	getch();

}