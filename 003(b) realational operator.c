#include<stdio.h>
int main()

{
	//declare variables
	int a,b;
	printf("enter your two numbers");
	scanf("%d %d",&a,&b);
	
	printf("\na<b=%d",a<b);
	printf("\na>b=%d",a>b);
	printf("\na==b=%d",a==b);
	printf("\na!=b=%d",a!=b);
	printf("\n(a>0&&b>0)=%d",(a>0&&b>0));
	printf("\n(a>0||b>0)=%d",(a>0||b>0));
	printf("\n!(a>b)=%d",!(a>b));
}
