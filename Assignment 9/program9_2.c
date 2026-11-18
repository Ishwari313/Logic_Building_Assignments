/*
2. Accept amount in Us dollar and return its corresponding value in Indian currency.
   Consider 1$ as 70 rupees.

Input: 30
Output: 2100

Input: 3
Output: 270

Input: 1200
Output: 84000
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0;
    int iAmt = 0;
    
    for(iCnt = 1,iAmt = 1;iCnt <=iNo;iCnt++)
    {
        iAmt = iNo*70;
    }
    return iAmt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);;

    printf("Value in INR is %d",iRet);
    return 0;
}