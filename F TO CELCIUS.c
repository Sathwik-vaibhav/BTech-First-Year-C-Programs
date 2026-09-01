#include<stdio.h>
int main ()	
{
	float F,c;
	printf("Enter the value of F=");
	scanf("%f",&F);
	
	c=(F - 32)/1.8;
	
	printf("The required c converted from F is= %f",c);
	return 0;

}
