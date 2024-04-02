/*UNIT CONVERSION CALCULATOR */
/*FIRST SOLUTION*/
#include <stdio.h>

int conversion;
double km, inch, cm, pound, mile, foot, meter, kg, condition;

int main()
{
mn:
    printf("Conversion you need: 1.kms to miles, 2.inches to foot, 3.cms to inches, 4.pounds to kgs, 5.inches to meters \n");
    printf("Choose the conversion: \n");
    scanf("%d", &conversion);
    switch (conversion)
    {
    case 1:
        printf("Enter the distance in kms: ");
        scanf("%lf", &km);

        mile = 0.621 * km;

        printf("%.1lf kms = %.1lf miles", km, mile);

        printf("\nCan you make another conversion ? : 1. Yes, 2. No : ");
        scanf("%lf", &condition);

        if (condition == 1)
        {
            goto mn;
        }

        else
        {
            break;
        }

    case 2:
        printf("Enter the length in inches: ");
        scanf("%lf", &inch);

        foot = 0.083 * inch;

        printf("%.1lf inches = %.1lf foots", inch, foot);

        printf("\nCan you make another conversion ? : 1. Yes, 2. No : ");
        scanf("%lf", &condition);

        if (condition == 1)
        {
            goto mn;
        }

        else
        {
            break;
        }

    case 3:
        printf("Enter the length in cms: ");
        scanf("%lf", &cm);

        inch = 0.39 * cm;

        printf("%.1lf cms = %.1lf inches", cm, inch);

        printf("\nCan you make another conversion ? : 1. Yes, 2. No : ");
        scanf("%lf", &condition);

        if (condition == 1)
        {
            goto mn;
        }

        else
        {
            break;
        }

    case 4:
        printf("Enter the weight in pounds: ");
        scanf("%lf", &pound);

        kg = 0.45 * pound;

        printf("%.1lf pounds = %.1lf kgs", pound, kg);

        printf("\nCan you make another conversion ? : 1. Yes, 2. No : ");
        scanf("%lf", &condition);

        if (condition == 1)
        {
            goto mn;
        }

        else
        {
            break;
        }

    case 5:
        printf("Enter the length in inches: ");
        scanf("%lf", &inch);

        meter = 0.0254 * inch;

        printf("%.1lf inches = %.1lf meters", inch, meter);

        printf("\nCan you make another conversion ? : 1. Yes, 2. No : ");
        scanf("%lf", &condition);

        if (condition == 1)
        {
            goto mn;
        }

        else
        {
            break;
        }

    default:

        printf("\nCan you make another conversion ? : 1. Yes, 2. No : ");
        scanf("%lf", &condition);

        if (condition == 1)
        {
            goto mn;
        }

        else
        {
            break;
        }
    }

    return 0;
}