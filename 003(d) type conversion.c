#include<stdio.h>
int main()
{
	//declare variables
	 float result1,result2;
	 int num1=10,num2=3;
	 
	 result1=num1/num2;
	 printf("implicit conversion=%.2f\n",result1);
	 
	 result2=(float)num1/num2;
	 printf("explicit conversion=%.2f\n",result2);
	 return 0;
}
