#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *pre; 
};

struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->pre = NULL; 

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
    temp->pre = ptr;
}

void deleteEnd()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty...\n");
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    if (ptr->pre != NULL)
    {
        ptr->pre->next = NULL;
    }
    else
    {
        head = NULL;
    }
    free(ptr);
}
void insertFirst(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;   
    temp->next = head;
    temp->pre = NULL;
    if (head != NULL)
    {
        head->pre = temp;
    }
    head = temp;
}
void deleteFirst()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty...\n");
        return;
    }
    head = ptr->next;
    if (head != NULL)
    {
        head->pre = NULL;
    }
    free(ptr);
}

void midInsert(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->pre = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr != NULL && ptr->data != pos)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        temp->next = ptr->next;
        temp->pre = ptr;
        if (ptr->next != NULL)
        {
            ptr->next->pre = temp;
        }
        ptr->next = temp;
    }
    else
    {
        printf("position is not found...\n");
        free(temp);
    }
}
void deletemid(int pos)
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("List is empty...\n");
        return;
    }
    if (ptr->data == pos)
    {
        head = ptr->next;
        if (head != NULL)
        {
            head->pre = NULL;
        }
        free(ptr);
        return;
    }
    while (ptr != NULL)
    {
        if (ptr->data == pos)
        {
            if (ptr->next != NULL)
            {
                ptr->next->pre = ptr->pre;
            }
            ptr->pre->next = ptr->next;
            free(ptr);
            return;
        }
        ptr = ptr->next;
    }
    printf("position not found...\n");
}
void display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is empty...\n");
        return;
    }
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int main()
{
    insertEnd(50);
    insertEnd(20);
    insertEnd(70);
    insertEnd(40);
    insertEnd(10);

    deleteEnd();
    deleteEnd();
    deleteEnd();

    insertFirst(100);
    insertFirst(250);
    insertFirst(350);

    midInsert(100,);

    display();

}