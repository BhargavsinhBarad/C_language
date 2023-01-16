#include<stdio.h>
struct Subjects {
    int nSub;
    char nSubNames[10][20];
    int nSubMarks[10];
};
       
struct stud {
    int id;
    char name[20];
	struct Subjects sub;
    float per;
    char grade;
	char status[20];
};

void main()
{
	int n,i,t,j;

	printf("Enter student number : ");
	scanf("%d",&n);
	printf("Enter totale number of subject : ");
	scanf("%d",&t);
	struct stud s[n];
	char str[n][20];
	int sum=0;
	
	for(i=0;i<t;i++)
	{
		printf("Enter sub %d name : ",i+1);
		scanf("%s",&str[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("Student %d / %d",i+1,n);
		printf("\nEnter ID\t: ");
		scanf("%d",&s[i].id);
		printf("Enter Nam\t: ");
		scanf("%s",&s[i].name);
		sum=0;
		for(j=0;j<t;j++)
		{
			
			strcpy(s[i].sub.nSubNames[j],str[j]);
			printf("Enter %s marks : ",s[i].sub.nSubNames[j]);
			scanf("%d",&s[i].sub.nSubMarks[j]);
			sum += s[i].sub.nSubMarks[j];
		}
		s[i].per=sum/t;
		
		if(s[i].per>=80 && s[i].per<=100)
		{
			s[i].grade='A';
		}
		else if(s[i].per>=60 && s[i].per<=79)
		{
			s[i].grade='B';
		}
		else if(s[i].per>=50 && s[i].per<=59)
		{
			s[i].grade='C';
		}
		else if(s[i].per>=33 && s[i].per<=49)
		{
			s[i].grade='D';
		}
		else 
		{
			s[i].grade='F';
		}
		if(s[i].grade=='F')
		{
			strcpy(s[i].status,"Fail..");
		}
		else
		{
			strcpy(s[i].status,"Pass");
		}
	}
	
	printf("ID\tName\t");
	
	for(i=0;i<t;i++){
		printf("%s\t",str[i]);
    }
    printf("per\tgrade\tstuts\n");
    printf("======= ======= ");
    for(i=0;i<t;i++){
		printf("======= ");
    }
    printf("======= ======= =======\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\t%s\t",s[i].id,s[i].name);
    	
    	for(j=0;j<t;j++)
    	{
    		printf("%d\t",s[i].sub.nSubMarks[j]);
		}
		
		printf("%.2f\t%c\t%s\n",s[i].per,s[i].grade,s[i].status);
	}
    
}
