#include<stdio.h>

struct student
{
	int id;
	char name[20];
	int age;
	char cours[20];
	char city[20];
	int std;
	char school[20];
};
void main()
{
	struct student s;
	
	printf("Enter id\t : ");
	scanf("%d",&s.id);
	printf("Enter name\t : ");
	scanf("%s",&s.name);
	printf("Enter age\t : ");
	scanf("%d",&s.age);
	printf("Enter cours\t : ");
	scanf("%s",&s.cours);
	printf("Enter city\t : ");
	scanf("%s",&s.city);
	printf("Enter std\t : ");
	scanf("%d",&s.std);
	printf("Enter school\t : ");
	scanf("%s",&s.school);
	
	printf("\nName\t: %s\n",s.name);
	printf("ID\t: %d\n",s.id);
	printf("Age\t: %d\n",s.age);
	printf("cours\t: %s\n",s.cours);
	printf("City\t: %s\n",s.city);
	printf("Std\t: %d\n",s.std);
	printf("School\t: %s",s.school);
}
