#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n,sum=0;
	clrscr();

	printf("Enter Ending num : ");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum is %d",sum);
	getch();
}