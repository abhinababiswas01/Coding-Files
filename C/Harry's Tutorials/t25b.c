/*FIBONACCI SERIES WITH RECURSIVE METHOD IN RECURSION*/

#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Fibonacci series term you got : ");
    scanf("%d", &n);
    printf("The fibonacci series is : ");
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}
