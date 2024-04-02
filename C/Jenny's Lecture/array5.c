// WAP to read marks of 5 students and calculate the sum and the average

#include<stdio.h>
int main()
{
    float marks[5];
    float sum=0,avg;

    printf("Enter the marks of the students: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum+marks[i];
    }
    avg=sum/5;

    printf("The sum of the student's marks is: %f", sum);
    printf("\nThe average of the students marks is: %f", avg);
    
    

    return 0;
}