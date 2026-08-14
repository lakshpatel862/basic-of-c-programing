#include<conio.h>

int main()

{
	//declare variables
	float principal,rate,time,simpleinterest;
	
	printf("enter value of principal");
	scanf("%f",&principal);
	printf("enter value of rate");
	scanf("%f",&rate);
	printf("enter vale of time:");
	scanf("%f",&time);
	
	simpleinterest=(principal*rate*time)/100;
	printf("simpleinterest=%.2f",simpleinterest);
	return 0;
}
