#include<stdio.h>
#define n 8

void quicksort(int a[],int first,int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        pivot = first;
        i=first, j=last;
        while(i<j)
        {
            while (a[i]<=a[pivot] && i<last)
            {
                i++;
            }
            while(a[j] > a[pivot])
            {
                j--;
            }
            
            if(i<j)
            { 
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }
}
int main()
{
    int a[] = {60,10,40,70,50,20,80,30,90};
    quicksort(a,0,n-1);

    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("\t%d ",a[i]);
    }
}
