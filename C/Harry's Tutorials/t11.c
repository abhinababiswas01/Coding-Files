#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    char gender;
    // const male;
    printf("Enter your age \n");
    scanf("%d", &age);

    

    switch (age)
    {
    case 18:
        printf("Your age is 18 ");


        printf("\nType your gender 1.male, 2.female, 3.third gender\n");
        scanf("%d", &gender);

        switch (gender)
        {
        case 1:
            printf("You are eligible for night out");
            break;
        
        
        default:
            printf("\nYou are unsafe");
        }
        break;
    
    
    default:
        printf("\nYou are not eligible for night out for your age");
    }
    return 0;
}
