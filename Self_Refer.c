#include <stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a,b,c,d;
    a.data = 50;
    a.ch = 'A';
    a.ptr = NULL;

    a.data = 10;
    a.ch = 'm';
    a.ptr = NULL;
   
    b.data = 10;
    b.ch = 'Z';
    b.ptr = NULL;

    c.data = 88;
    c.ch = 'B';
    c.ptr = NULL;

    c.data = 95;
    c.ch = 'B';
    c.ptr = NULL;


    a.ptr = &b;
    printf("B:Data:%d,Ch:%c",a.ptr->data,a.ptr->ch);
    
    b.ptr = &a;
    printf("\n B:Data:%d,Ch:%c",b.ptr->data,b.ptr->ch);

    c.ptr = &d;
    printf("\n B:Data:%d,Ch:%c",c.ptr->data,c.ptr->ch);

    d.ptr = &c;
    printf("\n B:Data:%d,Ch:%c",d.ptr->data,d.ptr->ch);

    

}
