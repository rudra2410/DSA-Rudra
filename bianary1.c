#include <stdio.h>

int Search(int n,int min,int max)
{
    int mid;

    mid = min + (max-min) / 2 ;

    if (n == mid)
    {
        return 1;
    }

    else if (n > mid)
    {
        min = mid;
        return Search(n,min,max);
    }

    else if (n < mid)
    {
        max = mid;
        return Search(n,min,max);
    }

    else
    {
        return -1;
    }
    
    
    
}


int main()
{
    int a[10]= {10,12,45,85,20,10,95,75,62,10},mid,max,min,x,result;



    for (int i = 0; i < 10 ; i++)
    {
        if (a[i] == 10)
        {
            printf("%d",i);
        }
        
    }

    min = a[0];
    max = a[9];

    result = Search(x,min,max);

        if (result == 1)
        {
            printf("X iS Persent Number :");
        }

        else
        {
            printf("X Is NOt Present Number :");
        }
        
    

    return 0;   
}