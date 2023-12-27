#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 2, 1, 5, 6, 7, 4, 6};
    int  i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                a[j] = a[i] + a[j]; // b=a
                a[i] = a[j] + a[i]; // a=b-a
                a[j] = a[j] + a[i]; // b=b-a
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d \t\t", a[i]);
    }
  
    return 0;
}