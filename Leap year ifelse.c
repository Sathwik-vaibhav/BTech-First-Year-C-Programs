#include<stdio.h>
int main()
{
	int Year;
	printf("enter the year:\n");
	scanf("%d",&Year);
	
	if(year%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Non leap year");
	}
	return 0;
}	
