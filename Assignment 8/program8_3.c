/*
3.Write a program to find Factorial of given number
*/


#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact =0;

    for(iCnt = 1, iFact =1; iCnt<=iNo;iCnt++)
    {
        iFact = iFact*iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("ENter Number: \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}






















