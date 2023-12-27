#include <stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};


int main()
{
    struct node x,y;
    x.data = 100;
    x.ch = '$';
    x.ptr = NULL;

    y.data = 150;
    y.ch = '#';
    y.ptr = NULL;


    x.ptr = &y;
    printf("Data:%d,Char:%c",x.ptr->data,x.ptr->ch);

    printf("\n");
    
    y.ptr = &x;
    printf("Data:%d,Char:%c",y.ptr->data,y.ptr->ch);



}