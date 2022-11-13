#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int a[20], low[20], high[20];
    int i, j, k;
    int n;
    int cPoint;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &cPoint);

    j = k = 0;
    for (i = 0; i < n; i++)
        if (a[i] < cPoint)
            low[j++] = a[i];
        else
            high[k++] = a[i];

    for (i = 0; i < j; i++)
        printf("%d ", low[i]);
    printf("\n");
    for(i=0; i< k; i++)
        printf("%d ", high[i]);
    printf("\n");

    /*
    int list[20];
    int n, s, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);

    scanf("%d", &s);

    for (i = 0; i < n; i++)
    {
        if (list[i] < s)
            printf("%d ", list[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        if (list[i] >= s)
            printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
    */
}
