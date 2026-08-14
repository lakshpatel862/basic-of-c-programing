#include<stdio.h>
int main()

{
	//declare variables
	float radius,area;
	
	printf("enter raidus of circle:");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("area of circle=%.2f",area);
	return 0;
}
