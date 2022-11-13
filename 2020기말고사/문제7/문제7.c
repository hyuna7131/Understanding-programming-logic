#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pwCheck(char rightPw[], char s[])
{
    int i;

    for (i = 0; rightPw[i] != '\0'; i++)
    {
        if (rightPw[i] != s[i])
            return 0;
    }
    return 1;
}

int main() 
{
    char rightPw[6] = "apple";
    char scanPw[20];
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%s", scanPw);
        printf("%d", pwCheck(rightPw, scanPw));
    }
}
