#include <stdio.h>
int main()
{
    int *a[50], n;
    printf("Enter size of an Array : \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d address Element: \n", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = 0;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("After Sorting an Array:-->\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\t", a[j]);
    }
}