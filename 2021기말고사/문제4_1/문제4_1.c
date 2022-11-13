#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
void changeToDigitEncode(char s[], char e[])
{
    int i;
    int eIndex = 0;
    for (i = 0; s[i] != '\0'; i++) {
        e[eIndex] = s[i] - 'A' + '0' + 1;
        eIndex++;
    }
    e[eIndex] = 0;
}
*/
void changeToDigitEncode(char s[], char e[])
{
    int i, j = 0;
    int score;
    for (i = 0; s[i] != '\0'; i++) {
        score = s[i] - 64;
        e[j++] = score + '0';  // 1�� ���ڷ� �ٲٱ� ���ؼ� 48('0')�� ���Ѵ�
    }
    e[j] = '\0';
}

int main(void)
{
    char sentence[20], encoded[40];

    scanf("%s", sentence);
    changeToDigitEncode(sentence, encoded);
    printf("%s\n", encoded);
}