#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n], i;
    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d element: ",i);
        scanf("%d", &a[i]);
    }
    //n = sizeof(a)/sizeof(a[0]);

    int *ptr = a;
    n = sizeof(a)/sizeof(a[0]);
    printf("Traverse array element: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d \t" , *ptr);
        *ptr++;
    }
    
    

    return 0;
}       