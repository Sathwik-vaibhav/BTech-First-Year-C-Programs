#include<stdio.h>
int main()
{
	int i,j,n,m,a[100][100],c=0,b=0;
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
	if(m==n)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i==j&&a[i][j]==1)
					c++;
				if(i!=j&&a[i][j]==0)
					b++;
			}
		}
		if(c==m&&b==m*(n-1))
			printf("It is an Identity matrix");
		else
			printf("It is not an Identity matrix");
	}
	else
		printf("It is not an Identity matrix");
}