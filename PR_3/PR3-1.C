#include<stdio.h>
#include<conio.h>

main()
{
	char A='a';
	clrscr();

	do
	{
		printf("%c\t",A);
		A++;
	}
	while(A<='z');
	getch();
}
