#include<stdio.h>
#include<conio.h>

main()
{
	float b,HRA,DA,TA,ans;
	clrscr();

	printf("Base Salary :");
	scanf("%f",&b);

	HRA=(b*10)/100;
	DA=(b*5)/100;
	TA=(b*8)/100;

	ans=b+HRA+DA+TA;

	printf("ANS=%.2f",ans);
	getch();

}
