#include<stdio.h>
#include<conio.h>

main()
{
int i,j,k;
clrscr();

for(i=5;i>=1;i--)
{
  for(k=1;k<=i;k++)
  {
   printf("%d",k);
  }
  printf("\n");
}

for(i=2;i<=5;i++)
{
  for(k=1;k<=i;k++)
  {
   printf("%d",k);
  }
  printf("\n");
}


getch();
}
