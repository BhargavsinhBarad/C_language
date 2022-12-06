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
		printf("%d ",i);
		i++;
	}
	while(i<=n)
	getch();
}
