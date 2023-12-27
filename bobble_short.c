#include<stdio.h>
#define n 10
int a[n],i,j;

int bubblesort(int a[])
{
    int temp;
    for ( i =0; i < n ; i++)
    {
        for(j =0 ; j< n - 1; j++ )
        {
                if(a[j] > a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j + 1] = temp;
                }
        }
    }
}
int main()
{
    int a[n] = {10,2,5,15,42,28,5,0,9,25};
    
    bubblesort(a);

    printf("\n sort array index is : ");
    for(i =0; i< n ; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}