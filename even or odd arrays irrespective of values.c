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
	printf("Elements at Odd indices:\n");
	
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("a[%d]=%d \n",i,a[i]);
		}
	}
		
	printf("Elements at Even indices:\n");
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("a[%d]=%d \n",i,a[i]);
		}
	}
}