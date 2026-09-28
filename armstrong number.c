#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,rem,sum=0,x,y,digit,z;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	y=n;
	x=n;
	while(y>0)
	{
		digit=y%10;
		z++;
		y=y/10;
	}
	
	while(n>0)
	{
		rem=n%10;
		sum=sum + pow(rem,z);
		n=n/10;
	}
	if(x==sum)
	{
		printf("it is an armstrong number");
	}
	else
	{
		printf("it is not an armstrong number");
	}
	return 0;
}