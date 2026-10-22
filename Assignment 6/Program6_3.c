/*
Calculate Shopping Discount

Problem Statement : Accept the total purchase amount and calculate the final payable amount after applyting he following discount.Negative purchase amoutnare invalid

Purchase Amount                 Discount

Below rs 1000                    0%
Rs 1000 to below rs 5000         10%
Rs 5000 and above                20%


Expected Output
    Input 800 -> Payable Amount = 800.00
    Input 2000 -> Payable Amount = 1800.00
    Input 6000 -> Payable Amount = 4800.00


*/


#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Purchase Amount");
    }
    else if(fAmount < 1000)
    {
        fDiscount = 0.0f;
        fFinalAmount = fAmount - fDiscount;

        printf("Payable Amount = %.2f", fFinalAmount);
    }
    else if(fAmount < 5000)
    {
        fDiscount = fAmount * 0.10f;
        fFinalAmount = fAmount - fDiscount;

        printf("Payable Amount = %.2f", fFinalAmount);
    }
    else
    {
        fDiscount = fAmount * 0.20f;
        fFinalAmount = fAmount - fDiscount;

        printf("Payable Amount = %.2f", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
