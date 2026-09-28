#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,root1,root2;
	printf("enter the coefficients of quadratic equation:\n");
	scanf("%f%f%f",&a,&b,&c);
	d=pow((b*b)-(4*a*c),0.5);
	
	root1=((-b)+d)/(2*a);
	root2=((-b)-d)/(2*a);
	
	printf("%f",root1);
	printf("%f",root2);
	
	return 0;
}	
