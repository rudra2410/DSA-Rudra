#include <stdio.h>

void Insert(int arr[],int n,int x,int pos )
{
    for (int i = n-1; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
    
}

int main()
{
    int arr[] = {25,30,35,45,55,60};

    int n=6,pos=4,x=50;

    Insert(arr,n,x,pos);
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}