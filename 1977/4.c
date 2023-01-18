#include<stdio.h>

main()
{
	int n,s=0,i;
	printf("Emter n: ");
	scanf("%d",&n);
	
	int a[n];
	int *p[n];
	
	for(i=0;i<n;i++)
	{
		p[i] = &a[i];
		printf("a[%d] : ",i);
		scanf("%d",p[i]);
		s += *p[i];
	}
	printf("Sum is %d",s);
}
