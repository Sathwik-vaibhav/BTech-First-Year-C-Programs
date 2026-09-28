#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three sides of triangle:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a == b && b == c)
	{
		printf("the triangle is eqilateral triangle");
	}
	else if(a!=b && b!=c && a!=c)
	{
		printf("the triangle is scalene triangle");
	}
	else
	{
		printf("the triangle is isoceles triangle");
	}
	return 0;
}	
