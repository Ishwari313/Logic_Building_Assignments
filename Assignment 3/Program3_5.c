// Accept one character from user and check whether that character is vowel or not
// Input: E       Output:TRUE
// Input: d       Output: FALSE


#include <stdio.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool ChkVowel(char cValue)
{
    if(cValue =='a' || cValue =='e'|| cValue =='i'|| cValue=='o'||cValue=='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int cValue = 0;
    bool bRet = FALSE;

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    bRet =ChkVowel(cValue);
    
    if (bRet == TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is not vowel\n");
    }

    return 0;
}