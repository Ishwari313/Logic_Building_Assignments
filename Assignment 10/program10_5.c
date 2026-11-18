double SquareMeter(int iValue)
{
    float fRes = 1.0;

    fRes = 0.0929 *iValue;

    return fRes;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%d square feet into square meter is:  %lf", iValue, dRet);

    return 0;
}