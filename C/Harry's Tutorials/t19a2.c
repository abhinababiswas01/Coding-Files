/*FUNCTIONS*/
/*WITH ARGUMENTS AND WITH RETURN VALUE*/

#include<stdio.h>

int sum(int a, int b);

int main(){
    int a,b,c;

    a=14;
    b=65;
    c= sum(a,b);

    printf("The sum the two numbers is %d", c);

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}
