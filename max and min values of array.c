#include <stdio.h>

int main()
{
    int i, n, max, min;
    printf("Enter the size of array:\n");
    scanf("%d", &n);	
    
    int a[n];
    printf("enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    max = a[0];
    min = a[0];
    
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        
        if (a[i] < min)
        {
            min = a[i]; 
        }
    }
    
    printf("\nMaximum value=%d\t Minimum value=%d\t\n", max, min);

    return 0;
}
