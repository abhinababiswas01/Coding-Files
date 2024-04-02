/*POINTERS*/

#include<stdio.h>

int main(){
    int a=69;
    int *ptra= &a;

    printf("The address of pointer to a is %p\n", &ptra); // %p & %x is to define the address of an variable or Called as format specifiers

    printf("Address of a is %x\n", ptra);
    printf("Address of a is %x\n", &a);

    printf("The value of a is %d\n", *ptra);

    return 0;
}