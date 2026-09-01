#include<stdio.h>
int main ()	
{
	float p,r,t,si;
	printf("enter the value of principal amount=");
	scanf("%f",&p);
	printf("enter the value of rate =");
	scanf("%f",&r);
	printf("enter the time period(in years)=");
	scanf("%f",&t);
	
	si=(p*t*r)/100;
	printf("required simple intreast si =%f",si);
	return 0;
}
	
	
	
