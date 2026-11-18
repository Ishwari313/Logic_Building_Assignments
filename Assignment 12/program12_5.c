/*
Write a program which accept number from user and count freq of such a digits which are less than 6

i/p : 2395
o/p :3

i/p: 96672
o/p: 1
*/

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iFreq = 0;

    while(iNo != 0)
    {
        iDigit = iNo %10;
        
        if(iDigit < 6)
        {
            iFreq++;
        }
        iNo = iNo /10;
    }
    return iFreq;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}