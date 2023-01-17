#include<stdio.h>

struct sub
{
	int maths,chme,phy;	
}; 
struct student
{
	int roll_no;
	char name[20];
	float per;
	struct sub sub;
};
void main()
{
	struct student s[5];
	FILE *f;
	int i;
	f=fopen("C:\\Users\\R22\\Desktop\\Result","w");
	
	for(i=0;i<5;i++)
	{
		system("cls");
		printf("\nStudent %d/5",i+1);
		
		printf("\nEnter Roll no : ");
		scanf("%d",&s[i].roll_no);
		printf("Enter name : ");
		scanf("%s",&s[i].name);
		printf("Enter maths : ");
		scanf("%d",&s[i].sub.maths);
		
		printf("Enter chem : ");
		scanf("%d",&s[i].sub.chme);
		
		printf("Enter phy  : ");
		scanf("%d",&s[i].sub.phy);
		
		s[i].per=(s[i].sub.chme+s[i].sub.maths+s[i].sub.phy)/3;
		
		printf("per is %.2f\n",s[i].per);
	}
	fprintf(f,"RoLLno\tname\tmaths\tchem\tphy\tper\n");
	fprintf(f,"======= ======= ======= ======= ======= =======\n");
	
	for(i=0;i<5;i++)
	{
		fprintf(f,"%d\t%s\t%d\t%d\t%d\t%.2f\n",s[i].roll_no,s[i].name,s[i].sub.maths,s[i].sub.chme,s[i].sub.phy,s[i].per);	
	}
	fclose(f);	
}
