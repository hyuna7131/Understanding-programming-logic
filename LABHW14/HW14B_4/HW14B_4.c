#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int calculatePoint(char s[]);
int main(void)
{
	char str[20];
	printf("단어를 입력하세요(빈칸없이):"); 
	scanf("%s", str);
	printf("점수는 %d\n", calculatePoint(str));
}
// calculatePoint 함수의 정의

int calculatePoint(char s[])
{
    int i;
    int sum = 0, point = 0;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            point += s[i] - 64;
        else if (s[i] >= 'a' && s[i] <= 'z')
            point += s[i] - 96;

    return point;
}

/*
int calculatePoint(char s[])
{
    int i;
    int sum = 0, point = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            point = s[i] - 64;
        else if (s[i] >= 'a' && s[i] <= 'z')
            point = s[i] - 96;
        sum += point;
    }
    return sum;
}
*/