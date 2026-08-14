#include<stdio.h>
int main()
{
   //declare variables
   float base,height,area;
   
   printf("enter base of triangle");
   scanf("%f",&base);
   printf("enter height of triangle");
   scanf("%f",&height);
   
   area=(base*height)/2;
   
   printf("area of triangle=%.2f",area);

return 0;   
}
