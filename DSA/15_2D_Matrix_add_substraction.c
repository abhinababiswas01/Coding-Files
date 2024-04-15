// Addition and Substraction of two matrices

#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], c[m][n], d[m][n];
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The sum of the two matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the two matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            d[i][j] = a[i][j] - b[i][j];
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }

    return 0;
}