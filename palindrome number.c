#include<stdio.h>
int main()
{
	int n, i, rem,reverse=0,x;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	x=n;
	while(n !=0)
	{
		rem=n%10;
		reverse=reverse*10 + rem;
		n=n/10;
	}
	if(x==reverse)
	{
		printf("it is a palindrome number");
	}
	else
	{
		printf("it is not a palindrome number");
	}
	return 0;
}