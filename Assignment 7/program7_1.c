/*  Write a program which accept number from user and print that number of $ and * on screen

Input : 5
Output: $   *   $   *   $   *   $   *   $   *

Input: 3
Output: $   *   $   *   $   *

Input: -3
Output:  $   *   $   *   $   *

*/


#include<stdio.h>

void Pattern(int iNo)
{
    //Updater
    if(iNo<0)
    {
        iNo =-iNo;
    }

    int iCnt = 0;
    
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;

}