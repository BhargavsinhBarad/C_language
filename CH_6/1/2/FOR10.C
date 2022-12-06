#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,sum=0;
	clrscr();

	printf("n : ");
	scanf("%d",&n);

	for(i=1; i<=10; i++)
	{
		printf("%d X %d = %d\n",n,i,n*i);
	}
	getch();
}