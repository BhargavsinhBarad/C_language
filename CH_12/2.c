#include<stdio.h>

struct emp
{
	int id;
    char name[20];
    int age;
	char role[20];
    char city[20];
	float experience;
	char company[20];
};
void main()
{
	struct emp e;
	
	printf("Enter id\t : ");
	scanf("%d",&e.id);
	printf("Enter name\t : ");
	scanf("%s",&e.name);
	printf("Enter age\t : ");
	scanf("%d",&e.age);
	printf("Enter role\t : ");
	scanf("%s",&e.role);
	printf("Enter city\t : ");
	scanf("%s",&e.city);
	printf("Enter experience\t : ");
	scanf("%f",&e.experience);
	printf("Enter company\t : ");
	scanf("%s",&e.company);
	
	printf("\nName\t: %s\n",e.name);
	printf("ID\t: %d\n",e.id);
	printf("Age\t: %d\n",e.age);
	printf("role\t: %s\n",e.role);
	printf("City\t: %s\n",e.city);
	printf("experienc\t: %f\n",e.experience);
	printf("company\t: %s",e.company);
}
