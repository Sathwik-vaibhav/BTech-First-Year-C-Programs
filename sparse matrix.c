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

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i][j]==0)
					c++;
				if(a[i][j]!=0)
					b++;
			}
		}
		if(c>b)
			printf("It is a Sparse matrix");
		else
			printf("It is not a Sparse matrix");
}