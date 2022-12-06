#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();

	printf("Enter Ending num : ");
	scanf("%d",&n);

	do
	{
	       printf("%d X %d = %d\n",n,i,n*i);
		i++;
	}
	while(i<=10);
	getch();
}
