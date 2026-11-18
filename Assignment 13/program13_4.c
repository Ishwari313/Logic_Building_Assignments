/*
Write a program which accept number from user and return multipliacation of all digits
*/

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigits = 0;
    int iMult = 1;
    int iNum =1;

    while(iNo != 0)
    {
        iDigits = iNo %10;
        if(iDigits != 0)
        {
            iNum = iDigits;

        }
        iMult = iMult * iNum;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}