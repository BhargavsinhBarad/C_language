#include<stdio.h>

struct d
{
	int inch,feet;
};

void main()
{
	struct d a;
	FILE *f,*f2,*f3;
	

	f=fopen("C:\\Users\\R22\\Desktop\\inch.txt","w");
	f2=fopen("C:\\Users\\R22\\Desktop\\feet.txt","w");
	f3=fopen("C:\\Users\\R22\\Desktop\\distance.txt","w");

	printf("Enter Inch : ");
	scanf("%d",&a.inch);
	
	printf("Enter feet :");
	scanf("%d",&a.feet);
	
	
	fprintf(f,"inch : %d",a.inch);
	fprintf(f2,"feet : %d",a.feet);
	
	while(a.inch>=12)
	{
		a.inch =a.inch-12;
		a.feet++;
	}
	fprintf(f3,"inch : %d\nfeet : %d",a.inch,a.feet);
	fclose(f);
	fclose(f2);
	fclose(f3);
}
