#include<stdio.h>
#include<conio.h>
main() 
{
    int n, a, b, c = 0;
    clrscr();
    printf("Enter N: ");
    scanf("%d", &n);
    a = n;

    while (a != 0) 
	{
        b = a % 10; 
        c = (b * b * b)+c;
        a = a/10;
    }

    if (c == n)
        printf("%d is a Armstrong number.", n);
    else
        printf("%d is not a Armstrong number.", n);

	getch();
}
