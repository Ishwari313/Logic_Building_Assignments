/*
Check Divisibility by 3 and 5

Problem Statement:Accept an integer and determine wheather it is divisible by both 3 and 5,only 3 , only 5
                  or neither

Expected Output:
        Input: 15 -->Divisible by Both
                9 -->Divisible by 3 Only
              10  -->Divisible by 5 Only
              7   -->Not Divisible by Either
*/

#include <stdio.h>
#include <stdlib.h>


void CheckMultipleDivisibility(int iNo)
{
    if((iNo % 5 == 0)&&(iNo % 3 == 0))
    {
        printf("Divisible by Both");
    }
    else if((iNo % 3)==0)
    {
        printf("Divisible by 3 Only");
    }
    else if((iNo % 5)== 0)
    {
        printf("Divisible by 5 Only");
    }
    else
    {
        printf("Not Divisible by Either");
    }

}

int main(void)
{
    int iValue = 0;

    printf("Enter Number:");

    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}