// Traverse an array elements by creating a function where pass array pointer

#include<stdio.h>
void traverse_func(int arr[], int size)
{   
    for(int i=0; i<size; i++)
    {
        printf("arr[%d]=%d \n", i, arr[i]);
    }
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size], i;
    printf("Enter the elements of the array: \n");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    size = sizeof(arr)/sizeof(arr[0]);
    traverse_func(arr,size);

    return 0;
}