#include<stdio.h>

fre(int a[],int n)
{
	int f[n],i,j,c=0;
	for(i=0;i<n;i++)
	{
	
		f[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				f[j]=0;
			}
		}
		if(f[i]==-1)
		{
			f[i]=c;
		}
	}
	for(i=0;i<n;i++)
	{
		if(f[i]>0)
		{
			printf("%d : %d\n",a[i],f[i]);
		}
	}
}
main()
{
	int n,i;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int  a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	fre(a,n);

}
