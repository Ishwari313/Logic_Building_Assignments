/*
Write  program which accept range from user and return addition of all numbers in between
that range(Range should contains positive numberrs only)

Input: 23 30
Output: 22

Input : 10 18
Output: 26

Input : -10 2
Output: Invalid Range

Input: 90 18
Output: Invalid Range

*/

#include<stdio.h>
int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart <= 0 || iEnd <= 0 || iStart > iEnd)
    {
        return -1;
    }
   
    for(iCnt = iStart; iCnt<=iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if (iRet == -1)
    {
        printf("Invalid Range");
    }
    else{
            printf("Addition is %d",iRet);

    }

    return 0;

}