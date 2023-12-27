#include <stdio.h>
#include <stdlib.h>

int n;
void print(int a[])
{
    int i;
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void QuickShort(int a[], int first, int last)
{
    int i, j, temp, pivot;
    if (first < last)
    {

        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (a[i] <= a[pivot] && i < last)
            {
                i++;
            }
            while (a[j] > a[pivot])
            {
                j--;
            }

            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            temp = a[pivot];
            a[pivot] = a[j];
            a[j] = temp;

            QuickShort(a, first, j - 1);
            QuickShort(a, j + 1, last);
        }
    }
}

int main()
{
    int a[10] = {11, 3, 99, 75, 3, 40, 90, 2, 55, 1}, i;
    printf("How Many Elemnet enter :");
    scanf("%d", &n);

    print(a);
    QuickShort(a, 0, n - 1);
    printf("\n Enter Quick SHort :");
    print(a);
}
