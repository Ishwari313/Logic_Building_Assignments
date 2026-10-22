/*
3. Find the Greater of Two Numbers

Problem Statement : Accept two integers and determine which number is greater. If both numbers are equal, display an appropriate message

Expected Output:

    Input: 10 20 -> 20 is Greater

    Input: 50 30 -> 50 is greater

    Input: 15 15 -> Both Numbers are equal
*/

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater",iFirst);
    }
    else if (iFirst == iSecond)
    {
        printf("Both Numbers Are Equal");
    }
    else
    {
        printf("%d is Greater",iSecond);
    }

    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers:");
    scanf("%d %d", &iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}