#include<stdio.h>
#include<conio.h>

main()
{
	int i=2000,n=3000;
	clrscr();

	do
	{
		if(i%4==0)
			printf("%d ",i);
		i++;
	}
	while(i<=n);
	getch();
}
