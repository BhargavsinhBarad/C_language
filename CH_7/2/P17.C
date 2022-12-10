#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(k=i;k<=5;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
	getch();

}