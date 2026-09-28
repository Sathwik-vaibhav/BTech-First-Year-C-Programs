# include<stdio.h>
int main()
{
	// To print sum of array values
	int i,n,sum=0;
	printf("Enter the size of array:\n");
	scanf("%d",&n);	
	int a[n];
	printf("enter %d elements:\n", n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("odd numbers:\n");
	
	for(i=0;i<n;i++)
	{
		if(a[i] % 2 !=0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\n");
		
	printf("Even numbers:\n");
	for(i=0;i<n;i++)
	{
		if(a[i] % 2 ==0)
		{
			printf("%d ",a[i]);
		}
	}
}