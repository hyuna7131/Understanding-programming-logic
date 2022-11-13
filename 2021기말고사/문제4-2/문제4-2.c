#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeToDigitEncode(char s[], char e[])
{
    int i, j = 0;
    int score;
    for (i = 0; s[i] != '\0'; i++) {
        score = s[i] - 64;
        if (score >= 10) {
            e[j++] = score / 10 + '0';
            e[j++] = score % 10 + '0';
        }
        else
            e[j++] = score + '0';
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


/*
void changeToDigitEncode(char s[], int e[])
{
    int i;
    int eIndex = 0;
    for (i = 0; s[i] != '\0'; i++) {
        e[eIndex] = s[i] - 'A' + 1;
        eIndex++;
    }
    e[eIndex] = 0;
}
int main(void) {
    char sentence[20];
    int encoded[40];

    scanf("%s", sentence);
    changeToDigitEncode(sentence, encoded);

    for (int i = 0; encoded[i] != 0; i++) {
        printf("%d", encoded[i]);
    }
}
*/