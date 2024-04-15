// Traverse 2D array

#include<stdio.h>
int main()
{
    int rows,cols;
    printf("Enter the number of rows and cols of the 2D matrix: \n");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the value of [%d][%d] position in the matrix: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
        
    }
    printf("The traverse of the matrix is : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);

        }
        printf("\n");
    }
    

    return 0;
}