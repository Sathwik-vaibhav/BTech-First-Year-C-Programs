# include<stdio.h>
int main()
{
	int i,n;
	printf("enter the size of a array:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter %d elements:\n", n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array in reverse order:\n");
	for (i=n-1;i>=0;i--)
		printf("%d,",a[i]);
}