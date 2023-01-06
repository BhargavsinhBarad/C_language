#include<stdio.h>
main()
{
	int a,b;
	
	int *p,*p2;
	
	p=&a;
	p2=&b;
	
	printf("A : ");
	scanf("%d",&(*p));
	
	printf("B : ");
	scanf("%d",&(*p2));
	
	*p= *p+ *p2;
	*p2= *p- *p2;
	*p= *p- *p2;
	printf("A : %d",*p);
	printf("\nB : %d",*p2);
}
