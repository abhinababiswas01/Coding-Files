// Traverse array elements using pointer

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the array size: \n");
    scanf("%d", &size);
    int arr[size],i;
    printf("Enter the elements of the array: \n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    printf("The traverse of the array is: \n");
    for ( i = 0; i < size; i++)
    {
        printf("%d \t", *ptr);
        *ptr++;
    }
    
    return 0;
}