#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();

	printf("Enter start num : ");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d ",n);
		n--;
	}
	getch();
}