/*FIBONACCI SERIES WITH ITERTAION METHOD IN RECURSION*/

#include <stdio.h>


int main()
{
    int n, n1=0, n2=1, next_term;

    printf("Enter the number for FIBONACCI series you got: ");
    scanf("%d", &n);

    printf("The fibonacci series is : ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", next_term);

        n1=n2;
        n2=next_term;
        next_term=(n1+n2);
    }
    
    

    
    return 0;
}


