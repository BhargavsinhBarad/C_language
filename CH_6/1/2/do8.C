#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n,sum=0;
	clrscr();

	printf("Enter Ending num : ");
	scanf("%d",&n);

	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=n);
	printf("sum is %d",sum);
	getch();
}
