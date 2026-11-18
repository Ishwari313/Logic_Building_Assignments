/*
Write a program which accept range from user and return addition of all even
numbers in between that range(range should contains positive numbers only)

Input: 23 30
Output: 108

Input : 10 18
Output: 70

Input : -10 2
Output: Invalid Range

Input: 90 18
Output: Invalid Range
*/
#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart <= 0 || iEnd <= 0 || iStart> iEnd)
    {
        return -1;
    }
    for(iCnt = iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt %2)== 0)
        {
            iSum = iSum +iCnt;;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the Starting point");
    scanf("%d",&iValue1);

    printf("Enter Ending point");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Input");
    }
    else
    {
        printf("Addition is %d",iRet);

    }
    return 0;
}