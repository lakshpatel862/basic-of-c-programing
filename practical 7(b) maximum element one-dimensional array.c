#include<stdio.h>
int main()
{
	//declare variables
	int numbers[5];
	int max;
	int i;
	
	printf("enter 5 element:\n");
	for(i=0;i<5;i++)
	{
		printf("enter element%d:",i+1);
		scanf("%d",&numbers[i]);
	}
	max=numbers[3];
	
	for(i=1;i<5;i++)
	{
		if(numbers[i]>max)
		{
			max=numbers[i];
		}
	}
	 printf("\nmaximum element=%d\n",max);
	 return 0;
}
