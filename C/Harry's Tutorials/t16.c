#include<stdio.h>

int main()

{
    // Multiplication Table

    int i,j;

    // printf("Enter 'i': ");
    // scanf("%d",&i);

    // printf("Enter 'j': ");
    // scanf("%d",&j);

    for (i=1,j=1;i<=10,j<=10;i++,j++)
    {
        printf("%d*%d is = %d\n",i,j,i*j);
        
    }

    return 0;
}