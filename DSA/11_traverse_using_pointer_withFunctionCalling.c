//  Traverse an Array using pointer by function calling

#include<stdio.h>
void function_traverse(int arr[], int size){
    printf("Traverse of the array is: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
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
    function_traverse(arr,size);

    return 0;
}