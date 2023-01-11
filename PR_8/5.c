#include<stdio.h>

change(int *a,int *b)
{
	scanf("%d",a);
	scanf("%d",b);
}
void main()
{
	int a,b;
	
	change(&a,&b);
	printf("A : %d\nB : %d",a,b);
}
