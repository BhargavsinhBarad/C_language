#include<stdio.h>

struct d
{
	int id,salary;
	char name[20],add[20],email[20],role[20];
};
main()
{
	int n,i;
	
	printf("Enter employ  : ");
	scanf("%d",&n);
	
	struct d a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter ID : ");
		scanf("%d",&a[i].id);
		printf("Enter name : ");
		scanf("%s",&a[i].name);
		printf("Enter Add : ");
		scanf("%s",&a[i].add);
		printf("Enter email : ");
		scanf("%s",&a[i].email);
		printf("Enter Role : ");
		scanf("%s",&a[i].role);
		printf("Enter salary : ");
		scanf("%d",&a[i].salary);
	}
	
	printf("ID\tname\tadd\t\t\temali\t\trole\tsalary\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%s\t%s\t%s\t%d");
	}
}
