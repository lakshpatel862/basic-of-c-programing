#include<stdio.h>

int main()
{
   //declare variables
   int a,b;
   int sum,sub,mul,div,mod;
   printf("enter the value of a");
   scanf("%d",&a);
   
   printf("enter the value of b");
   scanf("%d",&b);
   
   sum=a+b;
   sub=a-b;
   mul=a*b;
   div=a/b;
   mod=a%b;
   
   printf("\n addition=%d",sum);
   printf("\n substraction=%d",sub);
   printf("\n multiplication=%d",mul);
   printf("\n divition=%d",div);
   printf("\n modulus=%d",mod);
   
   return 0;
}
