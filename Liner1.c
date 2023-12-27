#include <stdio.h>

int main()
{
    int x;
    int a[10] = {1, 1, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 8)
        {
            x = i;
            printf("Print :%d\n", i);
        }
    }
    return 0;
}
