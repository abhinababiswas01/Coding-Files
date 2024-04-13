// Find minimum value in an array using pointer

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int arr[size],i;
    printf("Enter the array elements : \n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int min = *ptr;
    for ( i = 0; i < size; i++)
    {
        if(*(ptr+i)<min)
        {
            min = *(ptr+i);
        }
    }
    printf("The minimum of the array is %d", min);
    return 0;
}