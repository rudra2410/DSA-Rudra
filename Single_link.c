#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

};

struct node *head = NULL;

void InsertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }

    while (ptr->next != NULL)
    {
        ptr = ptr->next;    
    }
    ptr->next = temp;
    return ;  
}

