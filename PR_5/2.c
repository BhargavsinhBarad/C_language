#include<stdio.h>
main()
{
	int i,j,a,n;
	
   	printf ("Enter the value of N :");
   	scanf ("%d", &n);
   	
	int b[n];
   	
   	for (i=0; i<n; ++i)
	{
		printf("b[%d] : ",i);
      	scanf ("%d",&b[i]);
    }
   	
	for (i=0; i<n; i++)
	{
     	for (j=i+1; j<n; j++)
		{
        	 if (b[i] < b[j])
		 	{
            	a = b[i];
            	b[i] = b[j];
            	b[j] = a;
         	}
      	}
 	}
 	printf("second Largest number is %d",b[1]);
}
