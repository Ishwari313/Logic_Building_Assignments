/*
5. Write a program which returns difference between even factorial and odd factorial of given number

Input: 5
Output: -7 (8 - 15)

Input: -5
Output: -7 (8-15)

Input: 10
Output: 2895 (3840-945)

*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

    int iCnt1 = 0, iFact1 = 0, iCnt2 = 0, iFact2 = 0,iAns = 0;

    for(iCnt1 =1, iFact1= 1; iCnt1<= iNo;iCnt1++)
    {
        if((iCnt1 % 2)== 0)
        {
            iFact1 = iFact1*iCnt1;
        }
    }
    


    for(iCnt2 =1, iFact2= 1; iCnt2<= iNo;iCnt2++)
    {
        if((iCnt2 % 2)!= 0)
        {
            iFact2 = iFact2*iCnt2;
        }
    }
    
    iAns = iFact1- iFact2;
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;

}