#include <stdio.h>

int Search(int arr[],int n,int x)
{
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }

    }
    return -1;
}

int main()
{
    int arr[] = {12,55,78,99,23,65,85,20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 23;
    int result = Search(arr,n,x);
    if (result == -1)
    {
        printf("Element Is NOt Found");
    }
    else
    {
        printf("Element is Found:%d",result);
    }
    
    
} 