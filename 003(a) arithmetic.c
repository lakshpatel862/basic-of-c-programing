#include<stdio.h>
int main()
{
	//declare int variables
	int a,b;
	
	printf("enter your first number");
	scanf("%d",&a);
	printf("enrter your second number");
	scanf("%d",&b);
	 
	printf("\naddition=%d",a+b);
	printf("\nsubstracation=%d",a-b);
	printf("\nmultiplication=%d",a*b);
	printf("\ndivision=%d",a/b);
	printf("\nmodulus=%d",a%b);
	return 0; 
}
