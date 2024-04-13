// Find MAXIMUM element in an array using pointer

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the Array: \n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the ARRAY: \n");
    for(int i=0; i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int max = *ptr;

    for (int i = 0; i < size; i++)
    {
        if(*(ptr+i)>max)
        {
            max = *(ptr+i);
        }
    }
    printf("The max value of arr is %d", max);
    return 0;
}