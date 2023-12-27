#include <stdio.h>
#define n 10

int a[n],i,j;

void Insertion(int a[])
{
    int temp;
    for ( i = 1; i < n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            if (a[j-1] > a[j])
            {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    
}


int main()
{
    int arr[] = {10,8,4,9,3,7,6,2};
    Insertion(a);

    printf("\n sort array index is : ");

    for ( i = 0; i < n; ++i)
    {
        printf("%d\n",a[i]);
    }
    
}