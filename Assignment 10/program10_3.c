/*
Write a program which accept distance in kilometer and convert it into meter
(i kilometer = 1000 meter)

Input : 5
Output: 5000

Input 12
output: 12000
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 1;

    iMeter = 1000* iNo;

    return iMeter;
}


int main()
{
    int iValue = 0 , iRet =0;

    printf("ENter Distance: \n");
    scanf("%d",&iValue);

    iRet =KMtoMeter(iValue);

    printf("in meter %d",iRet);

    return 0;
}