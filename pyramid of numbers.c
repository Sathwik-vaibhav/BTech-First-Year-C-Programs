#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter no.of rows of pyramid:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
	
}