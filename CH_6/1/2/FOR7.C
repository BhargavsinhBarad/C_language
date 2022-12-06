#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();




	for(i=2000; i<=3000; i++)
	{
		if(i%4==0)
			printf("%d ",i);
	}
	getch();
}