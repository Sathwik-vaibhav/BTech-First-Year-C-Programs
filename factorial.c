#include<stdio.h>
int main()
{
	int n,i;
	int f=1;
	printf("enter your integer:");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		f=i*f;
	}
	{
		printf("%d",f);
	}
	return 0;
}
