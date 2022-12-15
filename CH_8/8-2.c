main()
{
	int n,i,l=0;
	
	printf("Enter value of n :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
		l++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nLenth is %d",l);
}
