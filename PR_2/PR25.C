#include<stdio.h>
#include<conio.h>

main()
{
	float t,u,a;
	clrscr();

	printf("enter unit :");
	scanf("%f",&u);

	if(u<=50)
	{
		a=u*0.5;
	}
	else if(u>50&&u<=150)
	{
		a=((u-50)*0.75)+25;
	}
	else if(u>150&&u<=250)
	{
		a=((u-150)*1.20)+100;
	}
	else
	{
		a=((u-250)*1.50)+220;
	}

	t=a+(a*0.20);
	printf("Your bill amount is %frs.",t);
	getch();
}