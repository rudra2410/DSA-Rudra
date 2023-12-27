#include <stdio.h>

int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }

    else if (num == 1)
    {
        return 1;
    }

    else
    {
        return num * fact(num  -1);
    }
    
}


int main()
{
    
    int num1;
    
    printf("ENter N :");
    scanf("%d",&num1);

    printf("Fact :%d is %d ",num1,fact(num1));
}