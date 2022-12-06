#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();

	printf("n : ");
	scanf("%d",&n);

	for(i=1; i<=n; n--)
	{
		if(n%2==0)
		printf("%d ",n);
	}
	getch();
}