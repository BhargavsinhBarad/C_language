#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();

	for(i=1;i<=7;i++)
	{
		if(i==6)
			printf("* *   * *");
		else if(i==5)
			printf("*   *   *");
		else
			printf("*\t*");
		printf("\n");
	}
	getch();
}