#include<stdio.h>
int main()
{
	//declare variables
	 int num;
	 
	 printf("enter the number");
	 scanf("%d",&num);
	 
	 if(num>0)
	  {
	  	printf("%d is a positive",num);
	  }
	 if(num<0)
	  {
	  	printf("%d is a negative",num);
	   } 
	 if(num==0)  
	  {
	  	printf("the number is zero");
	  }
	   return 0;
}
