#include<stdio.h>
main()
{
	int i,j,n,p,v,c;
	printf("Enter size of Array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter your position : ");
	scanf("%d",&p);
	
	printf("Enter your value : ");
	scanf("%d",&v);
	
	
	printf("\nEnter 1 to Insertion\n");
	printf("Enter 2 to Updatation\n");
	printf("Enter 3 to Sort accending\n");
	printf("Enter 4 to Sort descending\n");
	printf("Enter 5 to Revers\n");
	
	printf("Enter your choice : ");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1: 
				for(i=n-1;i>=p;j--)
				{
					a[i+1]=a[i];
				}
				a[p]=v;
				n++;
				break;
		case 2: 
				a[p]=v;
				break;
		case 3: 
				for(i=p;i<n;j++)
				{
					a[i+1]=a[i];
				}
				a[p]=v;
				n++;
				
				break;
		case 4:
				for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;i++)
					{
						if(a[i]<a[j])
						{
							a[i]=a[i]+a[j];
							a[j]=a[i]-a[j];
							a[i]=a[i]-a[j];
						}
					}
				}
				break;
		case 5:
				for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;i++)
					{
						if(a[i]>a[j])
						{
							a[i]=a[i]+a[j];
							a[j]=a[i]-a[j];
							a[i]=a[i]-a[j];
						}
					}
				}
				
				break;
		case 6:
				for(i=n;i>0;i--)
				{
					printf("%d ",a[i]);
				}
				break;
		default : printf("\nInvalid choice.... ");
	}
	if(c<6)
	{
		for(i=0;i<n;i++)
		{

			printf("%d ",a[i]);
		}
	}
}
