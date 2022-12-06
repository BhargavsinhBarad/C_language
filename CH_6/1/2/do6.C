#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();

	printf("Enter start num : ");
	scanf("%d",&n);

	do
	{
		if(n%2==0)
			printf("%d ",n);
		n--;
	}
	while(i<=n);
	getch();
}
