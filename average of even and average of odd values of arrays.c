# include<stdio.h>
int main()
{
	// To print sum of array values
	int i,n,e_sum=0,o_sum=0,e_count=0,o_count=0;
	float e_average=0,o_average=0;
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
			o_sum=o_sum+a[i];
			printf("%d ",a[i]);
			o_count++;
		}
	}
	if (o_count > 0)
    {
        o_average = (float)o_sum / o_count;
    }
		printf("\n");
	printf("Even numbers:\n");
	for(i=0;i<n;i++)
	{
		if(a[i] % 2 ==0)
		{
			e_sum=e_sum+a[i];
			printf("%d ",a[i]);
			e_count++;
			
		}
	}
	if (e_count > 0)
    {
        e_average = (float)e_sum / e_count;
    }		
printf("\n");
	printf("Even average=%f\t Odd average=%f\t",e_average,o_average);

}