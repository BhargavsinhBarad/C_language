#include<stdio.h>
main()
{
	int a;
	int *p;
	
	printf("A : ");
	scanf("%d",&a);
	p = &a;
	
	
	printf("Square is %d ",*p * *p);
}
