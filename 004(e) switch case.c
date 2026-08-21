#include<stdio.h>
int main()
{
	//declare variables
	 float num1,num2;
	 
	  //display menu
	  printf("====calculator menu=====\n");
	  printf("1.addition\n");
	  printf("2.substraction\n");
	  printf("3.multiplication\n");
	  printf("4.division\n");
	  
	  //read a user choice
	  int choice;
	  printf("enter your choice:");
	  scanf("%d",&choice);
	  
	  printf("enter your two number");
	  scanf("%f %f",&num1,&num2);
	  
	  switch(choice)
	   {
	   	case 1:
	   	  printf("addition=%.2f",num1+num2);
	   	  break;
	   	  
	   	case 2:
		   printf("substraction=%.2f",num1-num2);
		   break;
		   
		case 3:
		   printf("multiplication=%.2f",num1*num2);
		   break;
		   
		case 4:
		   if(num2!=0)
		    {
		    	printf("division=%.2f",num1/num2);
         }
         else
          {
          	printf("division by zero is not allowed");
		  }
		  break;
		  
		  default:
		    printf("invalid choice");
	   		
	   }
	  return 0;
}
