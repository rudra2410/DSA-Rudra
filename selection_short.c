#include<stdio.h>
#define n 10

int a[n],i,j,temp;
int selection(int a[])
{
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;  
            }
        }
    }
}
int main()

{
    int a[n] = {1,5,7,6,9,2,8,3,4,10};
    selection(a);

    printf("\nSorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}