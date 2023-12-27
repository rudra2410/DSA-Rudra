#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void beginsert( int item)
{
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }

    else
    {

        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
                temp = temp->next;
            ptr->next = head;
            temp->next = ptr;
            head = ptr;
        }
    }
}
void lastinsert(int item)
{
    struct node *ptr, *temp;
    
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
        }
    }
}
void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        ptr = head;
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = head->next;
        free(head);
        head = ptr->next;
    }
}
void last_delete()
{
    struct node *ptr, *preptr;
    if (head == NULL)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        ptr = head;
        while (ptr->next != head)
        {
            preptr = ptr;

            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
    }
}

void display()
{
    struct node *ptr;
    ptr = head;

    if (head == NULL)
    {
        printf("\nNothing to print ");
    }
    else
    {
        
        while (ptr->next != head)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
        printf("%d\n", ptr->data);
    }
}

int main()
{
    lastinsert(22);
    lastinsert(10);
    lastinsert(28);
    lastinsert(20);
    lastinsert(12);

    last_delete();
    last_delete();
    last_delete();
    last_delete();
    
    
    display();

}
