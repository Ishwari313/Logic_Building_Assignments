/*
Write a program which accept number from user and check
whether it contains 0 in it or not

Input: 2395
Output: there is no zero

Input:1012
output : it contains zero
*/
#include <stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{

    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
         
        if(iDigit==0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }

        iNo=iNo/10;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet=FALSE;

   

    printf("Enter number\n");
    scanf("%d", &iValue);

    bRet=CheckZero(iValue);

    if(bRet==TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}