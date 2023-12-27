#include <stdio.h>

int Find(int arr[],int n,int key)
{
    for (int  i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    return -1;
}

int main()
{
    int arr[] = {25,45,88,95,20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 95;

    int position = Find(arr,n,key);

    if (position == -1)
    {
        printf("Not Found");
    }
    
    else
    {
        printf("found %d",position + 1);
    }
    return 0;
}