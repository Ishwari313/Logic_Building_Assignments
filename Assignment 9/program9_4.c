/*
3. Write  progrm to find odd factorial of given number

Input :5
Output: 15  (5*3*!)

Input: 10
Output: 945 (9*7*5*3*1)
*/

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo <0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFact = 1;iCnt<=iNo; iCnt++)
    {
        if((iCnt %2)==0)
        {
            iFact = iFact* iCnt;
        }
        
    }
    return iFact;
}

int main()
{
    int iValue = 0 , iRet =0;

    printf("ENter Number :\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}

