#include<stdio.h>

// For Loop

int main(int argc, char const *argv[])
{
    int i=0,j=0;

    // First Expression

    for(; i<5, j<3;i++){
        printf("%d %d \n", i,j);
        j++;
    }

    // Second Expression

    for (; j<3, i<5; i++, j++)
    {
        printf("%d %d \n", i, j);
        
    }
    
    return 0;
}
