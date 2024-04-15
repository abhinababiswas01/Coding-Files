// Searching element in 2D array

#include<stdio.h>
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the elements of [%d][%d] index:  ",i,j);
            scanf("%d", &arr[i][j]);
            
        }
        
    }
    int x,p,q,c=0;
    printf("Enter the element for searching in the array: ");
    scanf("%d", &x);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]==x)
            {
                c++;
                p=i;
                q=j;
                break;
            }
            
            
        }
        
    }
    if(c == 1)
        printf("%d element found at [%d][%d] index of array ", x,p,q);
    else
        printf("Element not found in array");
    

    return 0;
}