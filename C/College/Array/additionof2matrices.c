#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array1[MAX_SIZE][MAX_SIZE], array2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, columns1, rows2, columns2, i, j, k;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &columns1);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns1; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &columns2);

    if (columns1 != rows2)
    {
        printf("The matrices cannot be multiplied with each other.\n");
        return 0;
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }

    // Adding two matrices
    printf("The sum of the two matrices is:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns1; j++)
        {
            result[i][j] = array1[i][j] + array2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Multiplying two matrices
    printf("The product of the two matrices is:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < columns1; k++)
            {
                result[i][j] += array1[i][k] * array2[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
