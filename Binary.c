#include <stdio.h>

int main()
{
    int a = 5;

    printf("A : %d A : %d \n",a,a++);
    printf("A : %d A : %d \n",a,++a);
    printf("A : %d A : %d \n ",a++,a++);
    printf("A : %d A : %d \n",++a,++a);
    printf("A : %d A : %d A : %d \n",a,a++,a++);
    printf("A : %d A : %d A : %d \n",a,++a,++a);
    printf("A : %d A : %d A : %d \n",++a,a++,a++);
    printf("A : %d A : %d A : %d \n",++a,a++,++a);
    printf("A : %d A : %d A : %d \n",a++,a++,++a);
    printf("A : %d A : %d A : %d \n",++a,++a,a++);
    printf("A : %d A : %d A : %d \n",a++,++a,a++);
    printf("A : %d A : %d A : %d \n",++a,a++,++a);
    printf("A : %d A : %d A : %d \n",a++,++a,a++);
    printf("A : %d A : %d A : %d A : %d \n",a,++a,a++,++a);
    printf("A : %d A : %d A : %d A : %d",a++,++a,a++,++a);


    return 0;
}