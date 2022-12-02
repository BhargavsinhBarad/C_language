#include<stdio.h>
#include<conio.h>

main()
{
	char a;
	clrscr();
	printf("enter character:");
	scanf("%c",&a);

	switch(a)
	{
		case 'M' : printf("monday");
			   break;
		case 'T' : printf("tuesday");
			   break;
		case 'W' : printf("wednesday");
			   break;
		case 't' : printf("tuesday");
			   break;
		case 'F' : printf("frieday");
			   break;
		case 'S' : printf("saturday");
			   break;
		case 's' : printf("sunday");
			   break;
		default : printf("invalid");


	}

	getch();
}