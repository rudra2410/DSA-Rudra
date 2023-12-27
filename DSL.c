#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("ENter THe Value :");
    scanf("%d",&n);
      
    int i;
    int sum = 0;
    int real = n;

    for (i = 0; i < n; i++)
    {
        i = n % 10 ;
        sum = sum + pow(i,3);
        n = n / 10;
    }

    if (sum == real)
    {
        printf("Amtrong Number");
    }

    else
    {
        printf("NOt Amstrong Number");
    }
    
    return 0;
}