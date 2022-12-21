#include<stdio.h>
main()
{
	int n=5,p,v,c,i;
	
	
	int a[5]={1,2,3,4,5};
	

	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nEnter position : ");
	scanf("%d",&p);
	
	printf("Enter you value : ");
	scanf("%d",&v); 
	
	printf("\n\n");
	
	printf("\n 1 TO insert");
	printf("\n 2 TO update");
	printf("\n 3 TO delete");
	
	printf("Enter your choice : ");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1: 
				for(i=n-1;i>p;i--)
				{
					a[i+1]=a[i];
				}
				a[p]=v;
				n++;
				for(i=0;i<n;i++)
				{
					printf("%d",a[i]);
				}
				break;
		case 2:
				a[p]=v;
				
				for(i=0;i<n;i++)
				{
					printf("%d",a[i]);
				}
				break;
		case 3:
				for(i=p;i<n;i++)
				{
					a[i]=a[i+1];
				}
				n--;
				for(i=0;i<n;i++)
				{
					printf("%d",a[i]);
				}
				break;
		default: 
				printf("Invalid choice...");
				
		
	}	
}
