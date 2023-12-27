
#include <stdio.h>

void Short()

{
    int i, j, x;
    


    int arr[10] = {8,15,20,90,10};

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    Short();
}