#include<stdio.h>
int main()
{
	int i,j,n,m,a[100][100],sum=0;
	printf("Enter no of rows and columns of the Matrix:\n");
	scanf("%d%d",&n,&m);
	printf("Enter required elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Trace of %d X %d Matrix is:\n",n,m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			sum=sum+a[i][j];	
		}
	}
	printf("%d",sum);
}