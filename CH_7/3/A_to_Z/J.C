#include<stdio.h>
#include<conio.h>

main()
{
	 int i=1;
	 clrscr();

	 for(i=1;i<=7;i++)
	 {
		if(i==1)
			printf("* * * * *");
		else if(i==7)
			printf("  * *");
		else if(i==6)
			printf(" *  *");
		else
			printf("    *");
		printf("\n");
	 }
	 getch();
}