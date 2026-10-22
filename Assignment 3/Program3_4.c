// 4.Accept one Character from user and convert case of that character

//Input:a        Output: A
//Input:D        Output: d


#include <stdio.h>

void DisplayConvert( char cvalue)
{
    if(cvalue =='a')
    {
        printf("%c",'A');
    }
    else if(cvalue=='D')
    {
        printf("%c",'d');
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character\n");

    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}