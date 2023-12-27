#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int x,n;

    printf("Enter The Value :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == n)
        {
            x = n;
            printf("Liner of arry :%d\t",i);
        }
    
    }
    
    return 0;
}
    