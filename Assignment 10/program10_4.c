double FhtoCs(float fTemp)
{
    float fRes=1.0;
    fRes=(fTemp-32)*(5.0/9.0);

    return fRes;                                                            
     
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("The Radius of Circle is %lf", dRet);

    return 0;
}