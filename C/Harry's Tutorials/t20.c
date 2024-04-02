/*MULTIPLICATION TABLE*/

#include<stdio.h>

int main(){

    int num;

    printf("The number of the multiplicity is : ");
    scanf("%d", &num);

    printf("The table of %d is as follows: ", num);

    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d X %d = %d", num, i, num*i);

    }
    return 0;
}