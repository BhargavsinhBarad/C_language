#include<stdio.h>

insert(int a[],int n)
{
	int p,v,i;
	
	printf("Enter you potion : ");
	scanf("%d",&p);
	
	printf("Enter your value : ");
	scanf("%d",&v);
	
	for(i=n-1;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=v;
	n++;
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}

update(int a[],int n)
{
	int p,v,i;
	
	printf("Enter you potion : ");
	scanf("%d",&p);
	
	printf("Enter your value : ");
	scanf("%d",&v);
	
	a[p]=v;
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

delet(int a[],int n)
{
	int p,v,i;
	
	printf("Enter you potion : ");
	scanf("%d",&p);
	
	for(i=p;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}

display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

Array(int a[],int n)
{
	int c;
	
	printf("press 1 to insert.\n");
	printf("press 2 to delete.\n");
	printf("press 3 to update.\n");
	printf("press 4 to display\n");
	
	printf("Enetr your choice : ");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1 : insert(a,n); break;
		case 2 : delet(a,n); break;
		case 3 : update(a,n); break;
		case 4 : display(a,n); break;
		default : printf("Invalid choice.."); break;
	}	
}

main()
{
	int n,i;
	
	printf("Enter your Array size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	Array(a,n);		
}
