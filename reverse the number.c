#include<stdio.h>
int main()
{
	int n, i, rem,reverse=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	printf("reverse=%d",reverse);
return 0;
}