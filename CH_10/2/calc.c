#include<stdio.h>

int addition(int a,int b)
{
	return a+b;
}

int subtraction(int a,int b)
{
	return a-b;
}

int multiplication(int a,int b)
{
	return a*b;
}

int division(int a,int b)
{
	return a/b;
}

int modul(a,b)
{
	return a%b;
}



void main()
{
	
	int a,b,ch;
    do
    {
    
    printf("\n");
	printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
	  
    printf("\npress 1 = +");
    printf("\npress 2 = -");
    printf("\npress 3 = *");
    printf("\npress 4 = /");
    printf("\npress 5 = %%");
    printf("\npress 6 = Exit\n");
    
    printf("Enter your choice :");
    scanf("%d",&ch);
    
    switch (ch)
    {
    	case 1:
    	   printf("Addition is %d",addition(a,b));
    	   break;
    	   
        case 2:
    	   printf("Subtraction is  %d",subtraction(a,b));
    	   break;
    	   
		case 3:
    	   printf("Multiplication is %d",multiplication(a,b));
    	   break;
    	   
		case 4:
    	   printf("Division is %d",division(a,b));
    	   break;
    	   
		case 5:
    	   printf("Modul is %d",modul(a,b));
    	   break; 
		
		case 6:
			printf("Exit.");
			break;
			
		default : 
			printf("Invalid choice..");
			break;  	        
	}
    }
    while(ch!=6);
    
}
