#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

int InsertEnd(int item)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    ptr->data = item;


    if (ptr == NULL)
    {
        head = temp;
        return;
   
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
            struct node *ptr;

    }
 }


void DeleteEnd()
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

void InsertFirst(int item)
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

void DeleteFirst()
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

void Display()
{
    struct node *ptr;
    ptr = head;

    if (head == NULL)
    {
        printf("\n Nothing print");
    }
    else
    {
        while (ptr->next != head)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
        printf("%d\t", ptr->data);
    }
}

int main()
{
    InsertEnd(52);
    InsertEnd(25);
    InsertEnd(42);
    InsertEnd(88);

    InsertFirst(100);
    InsertFirst(80);
    InsertFirst(22);

    DeleteFirst();
    DeleteFirst();

    Display();

    return 0;
}