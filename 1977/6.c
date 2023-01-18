#include<stdio.h>
main()
{
	FILE *f,*f1;
	int a;
	
	f=fopen("C:\\Users\\R14\\Desktop\\f1.tx","r");
	f1=fopen("C:\\Users\\R14\\Desktop\\f2.tx","a");
	
	fscanf(f,"%d",&a);
	printf("%d",a);
	
	fprintf(f1,"%d",a);
	
	fclose(f);
	fclose(f1);
}
