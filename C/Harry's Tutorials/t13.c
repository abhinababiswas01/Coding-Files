#include<stdio.h>

// Do While Loop

int main()
{
    int num,index=0;

    printf("enter the num: ");
    scanf("%d", &num);
    
    do
    {
        printf("%d \n", index+1);    
        index=index+1;        
    } while (index<num);
    
    return 0;
}
