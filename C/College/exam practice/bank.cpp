#include <stdio.h>
#include <conio.h>
int ob = 500, da, tb, wa, ta;
int deposit()
{
    printf("Enter Deposit Amount ");
    scanf("%d", &da);
    tb = ob + da;
    printf("Total Amount %d", tb);
}
int withdraw()
{
    printf("Enter Withdrawn Amount ");
    scanf("%d", &wa);
    if (wa > ob)
    {

        printf("Not Enough money");
    }
    else
    {

        tb = ob - wa;
        printf("Total Amount %d", tb);
    }
}
int moneytransfer()
{
    printf("Enter Transfer Amount ");
    scanf("%d", &ta);
    if (ta > ob)
    {

        printf("Not Enough money");
    }
    else
    {

        tb = ob - ta;
        printf("Total Amount %d", tb);
    }
}
int main()

{
    int pin1 = 1234, pin2 = 0000, pn, choose;
    printf("Welcome to State Bank of india");
    printf("\nEnter pin ");
    scanf("%d", &pn);
    if (pin1 == pn)
    {
    mm:
        printf("1. Deposit Balance\n2. Withdraw Balance\n3. Money Transfer\n4. Check Balance");
        printf("\nChoose as your need\n");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            // printf("Deposit");
            deposit();
            break;
        case 2:
            // printf("Withdraw balance ");
            withdraw();
            break;
        case 3:
            // printf("Money transfer");
            moneytransfer();
            break;
        case 4:
            printf("Total Balance %d", ob);
            break;
        default:
            printf("Input Correct number\n");
            goto mm;
        }
    }
    else if (pin2 == pn)
    {
    mn:
        printf("1. Deposit Balance\n2. Withdraw Balance\n3. Money Transfer\n4. Check Balance");
        printf("\nChoose as your need\n");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            // printf("Deposit");
            deposit();
            break;
        case 2:
            // printf("Withdraw balance ");
            withdraw();
            break;
        case 3:
            // printf("Money transfer");
            moneytransfer();
            break;
        case 4:
            printf("Total Balance %d", ob);
            break;
        default:
            printf("Input Correct number\n");
            goto mn;
        }
    }
    else
    {
        printf("Sorry Wrong Pin");
    }

    getch();
}