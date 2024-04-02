// Read 10 numbers and find the Even or Odd numbers

#include<stdio.h>
int main()
{
    int num[10];
    int even=0, odd=0;

    printf("Enter the 10 numbers: \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        

        // if (num[i]%2 == 0)
        //     even++;
        // else
        //     odd++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (num[i]%2 == 0)
        {
            printf("\n%d is even", num[i]);
            even++;
        }

        else
        {
            printf("\n%d is odd", num[i]);
            odd++;
        }
                
    }
    
   
    printf("\nTotal number of even number is: %d", even);
    printf("\nTotal number of odd number is: %d", odd);

    return 0;
}