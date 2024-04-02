/*FUNCTIONS*/
/*WITHOUT ARGUMENTS AND WITH RETURN VALUE*/

#include<stdio.h>

int takenumber()
{
    int i;
    printf("Enter the number: ");
    scanf("%d", &i);
    return i;
}

int main(){

    int c;

    c=takenumber();
    printf("the entered number is %d", c);

    return 0;
}
