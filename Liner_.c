#include <stdio.h>

int  main()

{
    int a[10] = {2,4,6,7,8,2,4,9,1,3};
    int x,n;
    

    printf("Enter The Value :");
    scanf("%d",&n);

    for (int  i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            x = n;
            printf("Liner Of Arry :%d\t",i);
        }

      
        
    }
    return 0;   
}