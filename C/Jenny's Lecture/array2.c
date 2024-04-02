// run time program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5];
    printf("Put the elements of the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    
    printf("The elements of the array are reversely: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
