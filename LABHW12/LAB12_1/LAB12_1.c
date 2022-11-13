#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int total = 0, average, i, num;
    int scores[40];

    printf("Enter the number of scores(0 < number <= 40):");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }

    printf("------------------------------------\n");

    for (i = 0; i < num; i++)
        total += scores[i];

    printf("Total : %d\n", total);
    average = total / num;
    printf("Average: %d\n", average);

    for (i = 0; i < num; i++)
        printf("%d ", scores[i]);

    printf("\n");

    return 0;
}
