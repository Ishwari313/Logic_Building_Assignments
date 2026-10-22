/*
Check Leap Year

Problem Statement : Accept a year and determine whether it is a leap year according to Gregorion calender rules
                   A year is a leap year if it is divisible by 400 , or divisible by 4 byt not by 100.Consider years less than or equal to zero invalid

Expected Output:
    Input: 2024 -->Leap Year

    Input:1900 -->Not a Leap Year

    Input: 2000 -> Leap Year
*/


#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 400 == 0) || (iYear %4 == 0) &&(iYear %100!=0))
    {
        printf("It is Leap Year");
    }
    else
    {
        printf("It is not Leap Year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}