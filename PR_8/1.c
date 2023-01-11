#include<stdio.h>

void main()
{
	int a,b;
	int *p;
	int *q;
	
	p=&a;
	q=&b;
	
	printf("a : ");
	scanf("%d",p);
	printf("b : ");
	scanf("%d",q);
	
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	
	printf("A : %d",*p);
	printf("\nB : %d",*q);
	
}
