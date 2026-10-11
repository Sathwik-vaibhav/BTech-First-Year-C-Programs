#include<stdio.h>
int main()
{
	int i,j,n,a;
	printf("Enter no.of rows of pyramid:");
	scanf("%d",&n);
	a=65;
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",a);
			a++;
			
		}
		printf("\n");

	}
	
}