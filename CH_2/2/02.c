#include<stdio.h>
#include<conio.h>

main()
{
clrscr();
 int  x, y ,z;

printf("Enter x:");
scanf("%d",&x);


printf("Enter y:");
scanf("%d",&y);


z=x;
x=y;
y=z;

printf("\nx=%d",x);
printf("\nY=%d",y);
getch();
}
