#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();

	printf("n : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		if(i%2!=0)
			printf("%d ",i);
	}
	getch();
}