// Simple LinkList
#include<stdio.h>
#include<stdlib.h>

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
        printf("list is alredey empty....");
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
void InsertFirst(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    head = temp;
}
void DeleteFirst()
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
}

void InsertMid(int val, int position)
{
    struct node *ptr = head,*p;
    struct node *temp = malloc(sizeof(struct node));
    int i=1;

    temp->data = val;

    while (i < position)
    {
        i++;
        p=ptr;
        ptr = ptr->next;
    }
    temp->next = ptr;
    p->next=temp;
    return;
}
void DeleteMid(int pos)
{
    struct node *ptr = head;
    struct node *prev;

    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    free(ptr);
    return;
}

void Display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("\nlist is empty...");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    InsertEnd(100);
    InsertEnd(200);
    InsertEnd(300);
    InsertEnd(400);
    InsertEnd(500);
    InsertEnd(600);

    // InsertFirst(50);
    // InsertFirst(60);
    // InsertFirst(70);

    InsertMid(50,3);
    //DeleteMid(50);

    Display();
} 