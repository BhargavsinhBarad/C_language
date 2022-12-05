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
		if(n%2==0)
			printf("%d ",n);
		n--;
	}
	getch();
}