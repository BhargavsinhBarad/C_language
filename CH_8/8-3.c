main()
{
	int n,i,s=0;
	
	printf("Enter value of n :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
		s +=a[i];
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("Average is %d",s/n);
}
