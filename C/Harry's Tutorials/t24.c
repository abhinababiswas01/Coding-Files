/*UNIT CONVERSION CALCULATOR */
/*SECOND SOLUTION*/

#include <stdio.h>

char input;
float kmToMile = 0.621;
float inchToFoot = 0.083;
float cmToInch = 0.39;
float poundToKg = 0.45;
float inchToMeter = 0.0254;
float first, second;
int main()
{
    while (1)
    {

        printf("Enter the process : 1.kmToMile, 2.inchToFoot, 3.cmToInch, 4.poundToKg, 5.inchToMeter, q.Quit: \n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("QUitting the program ..............................................................................");
            goto end;
            break;
        case '1':
            printf("Enter the first value to convert : ");
            scanf("%f", &first);
            second = first * kmToMile;
            printf("%f kms is equal to %f miles", first, second);

            break;
        case '2':
            printf("Enter the first value to convert : ");
            scanf("%f", &first);
            second = first * inchToFoot;
            printf("%f inches is equal to %f foots", first, second);

            break;
        case '3':
            printf("Enter the first value to convert : ");
            scanf("%f", &first);
            second = first * cmToInch;
            printf("%f cms is equal to %f inches", first, second);
            break;

        case '4':
            printf("Enter the first value to convert : ");
            scanf("%f", &first);
            second = first * poundToKg;
            printf("%f pounds is equal to %f kgs", first, second);

            break;
        case '5':
            printf("Enter the first value to convert : ");
            scanf("%f", &first);
            second = first * inchToMeter;
            printf("%f inches is equal to %f meters", first, second);

            break;

        default:
            break;
        }
    }
end:

    return 0;
}