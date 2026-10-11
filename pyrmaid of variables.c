#include<stdio.h>
int main()
{
	int i,j,n,k,a=65;
	printf("Enter no.of rows of pyramid:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a=65;
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++,a++)
		{
			printf("%c ",a);
		}
		printf("\n");
	}
	
}