#include<stdio.h>
main()
{
	int n,i,j,c;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int  a[n],f[n];
	int  *p1[n];
	int  *p2[n];
	
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
		f[i]=-1;
		p1[i]=&a[i];
		p2[i]=&f[i];
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(*p1[i]==*p1[j])
			{
				c++;
				*p2[j]=0;
			}
		}
		if(*p2[i]==-1)
		{
			*p2[i]=c;
		}
	}
	for(i=0;i<n;i++)
	{
		if(*p2[i]>0)
		{
			printf("%d : %d\n",*p1[i],*p2[i]);
		}
	}
}

