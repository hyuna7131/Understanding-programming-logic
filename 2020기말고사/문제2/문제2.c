#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_prime(int num);
int main(void)
{
    int a[21], p[21], np[21];
    int i;
    int n;
    int pIndex = 0, npIndex = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        if (is_prime(a[i]))
            p[pIndex++] = a[i];
        else
            np[npIndex++] = a[i];

    for (i = 0; i < pIndex; i++)
        printf("%d ", p[i]);
    for (i = 0; i < npIndex; i++)
        printf("%d ", np[i]);

    return 0;
}

int is_prime(int num)
{
    int i;

    for (i = 2; i < num; i++)
        if (num % i == 0)
            return 0;

    return 1;
}

/*
int main(void)
{
    int arr[20];
    int n, j, i;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; ++i)
    {
        for (j = 2; j < arr[i]; ++j)
            if (arr[i] % j == 0) break;
        if (arr[i] == j) printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        for (j = 2; j < arr[i]; ++j)
            if (arr[i] % j == 0) break;
        if (arr[i] != j) printf("%d ", arr[i]);
    }
    return 0;
}
*/