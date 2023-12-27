#include <stdio.h>


int main()
{
    int arry[10] = {10,25,80,75,40,10,25,45,62,20} ;
    int i,j;

    for (int  i = 0; i < 10; i++)
    {
        for (int j  = 10; j >=  i + 1; j--)
        {
            if (arry[i] > arry[j])
            {
                arry[j] = arry[i] + arry[j] ; // b = a+b;
                arry[i] = arry[j] - arry[i] ; // a = b-a;
                arry[j] = arry[j] - arry[i] ; // b = b-a;

            }
            
        }

    }
        for ( int i = 0; i < 10; i++)
        {
            printf("%d \t\t",arry[j]);
        }
        
        
    
    return 0;
}

