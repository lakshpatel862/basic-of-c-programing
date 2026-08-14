#include<stdio.h>
int main()
{
	//decllare variables
	char grade;
	int rollno;
	float marks;
	
	printf("enter the rollno");
	scanf("%d",&rollno);
	printf("enter the marks");
	scanf("%f",&marks);
	printf("enter the grade");		
	scanf(" %c",&grade);
	printf("\n----student details----\n");
	printf("rollno:%d\n",rollno);
	printf("marks :%f\n",marks);
	printf("grade :%c\n",grade);
	return 0;
}
