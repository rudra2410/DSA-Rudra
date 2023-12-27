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
    return;
}

void DeleteEnd()
{
    struct node *ptr = head, *p;
    if (head == NULL)
    {
        printf("Linklist Is Empty");
    }

    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
    }

    else
    {
        while (ptr->next != NULL)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = NULL;
        free(ptr);
    }
    return;
}

void Display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List Is Empty");
    }

    else
    {
        while (ptr != NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }

    }

    printf("\n");
}

int main()
{
    InsertEnd(12);
    InsertEnd(55);
    InsertEnd(88);
    InsertEnd(75);
    InsertEnd(10);

    DeleteEnd();
    DeleteEnd();
    DeleteEnd();
    DeleteEnd();
    
    Display();

}

