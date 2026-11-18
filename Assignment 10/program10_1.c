/*
Write a program whcih accept radius of cricle from user and calculate its area.
Consider value of PI as 3.14 (Area = PI*Radius *Radius)

Input: 5.3
Output: 88.2026


*/

#include<stdio.h>

double CircleArea(float fRadius)
{ 
    double dArea = 1.0;

    dArea = 3.14*fRadius*fRadius;

    return dArea;

}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enterr Radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f",dRet);

    return 0;
}