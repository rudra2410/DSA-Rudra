#include <stdio.h>
#include <stdlib.h>

struct code
{
    int data;
    struct code *next;
};

struct node *head;

int InsertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
}

