#include <stdio.h>
int main()
{
    int i, n, *a[20];
    printf("Enter the Array size:\n");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d element of the array: \n", i);
        scanf("%d", &a[i]);

    }

    int max = a[0];

    for (i = 0; i < n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
            
        }
    }

    printf("The maximum element in the array is %d", max);
    

    return 0;
}