#include<stdio.h>

int main(int argc, char const *argv[])
{
    int subject;

    printf("Choose subject candidates pass: 1 Math & Sciences, 2 Science, 3 Math \n");
    scanf("%d", &subject);

    if(subject==1)
    {
        printf("The candidate get 45 rupees gift");
    }
    if(subject==2)
    {
        printf("The candidate get 15 rupees gift");

    }
    if (subject==3)
    {
        printf("The candidate get 15 rupees gift");
    }
    return 0;
}
