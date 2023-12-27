#include <stdio.h>
int bainary_Search(int n, int min, int max)
{

    int mid;

    mid = min + (max - min) / 2;

    if (n == mid)
    {
        return 1;
    }
    else if (n > mid)
    {
        min = mid;
        return bainary_Search(n, min, max);
    }
    else if (n < mid)
    {
        max = mid;
        return bainary_Search(n, min, max);
    }
    else
    {
        return -1;
    }
}

int main()
{
    int a[10] = {1, 2, 3, 2, 1, 5, 6, 7, 4, 6}, i, j, mid, min, max, x , result;

    for (i = 0; i < 9; i++)
    {
        if (a[i] == 2)
        {
            printf("%d",i);
        }
    }

    min = a[0];
    max = a[9];

    result = bainary_Search(x, min, max);
    if (result == 1)
    {
        printf("x is present in an array ");
    }
    else
    {
        printf("x is not present in an array ");
    }
    return 0;
}