#include<stdio.h>

main()
{
	int n,i,s=0,pe;
	
	printf("Enter Array size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("%d subject marks : ",i+1);
		scanf("%d",&a[i]);
		s += a[i];
	}
	pe = (s*100)/(n*70);
	
	printf("Percetage : %d%%\n",pe);
	
	if(pe>90 && pe<100)
		printf("Grade :A1");
	else if(pe>80 && pe<=90)
		printf("Grade :A");
	else if(pe>70 && pe<=80)
		printf("Grade :B");
	else if(pe>60 && pe<=70)
		printf("Grade :C");
	else if(pe>40 && pe<=60)
		printf("Grade :D");
	else
		printf("Fali..");
}
