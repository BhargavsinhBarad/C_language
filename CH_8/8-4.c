main()
{
	int n,i;
	
	printf("Enter value of n :");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("c[%d] :%d\n",i,c[i]);
	}
}
