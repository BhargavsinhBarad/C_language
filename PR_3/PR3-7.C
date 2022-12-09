#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,a=0,b=1,c,sum=0;
	clrscr();

	printf("N : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%d ",sum);
		sum=a+b;
		c=a;
		a=b;
		b=sum;
	}
	getch();
}