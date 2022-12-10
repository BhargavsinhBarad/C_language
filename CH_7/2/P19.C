#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(k=i;k<5;k++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			if(j==2||j==4)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
	getch();

}