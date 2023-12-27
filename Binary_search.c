#include <stdio.h>

int Binarysearch(int arr[],int high,int low,int x)
{
    while (low <= high)
    {
        int mid = low + (high-low) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        if (arr[mid] < x)
        {
            low = mid + 1;
        }

        else
        {
            high = mid -1;
        }
        return -1;   
    }
    
}

int main()
{
    int arr[] = {10,4,5,8,4,2,3,2,9,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int result = Binarysearch(arr,0,n-1,x);
    if (result == -1)
    {
        printf("Element is not found");
    }
    else
    {
        printf("Found:%d",result);
    }
    
    return 0;
}