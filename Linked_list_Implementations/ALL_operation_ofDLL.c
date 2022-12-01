#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *previous;
    struct node *next;
};
struct node *head = NULL, *temp, *newnode;
void createdll(int items)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = items;
    newnode->next = NULL;
    newnode->previous = NULL;
    if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {

        temp->next = newnode;
        newnode->previous = temp;
        temp = newnode;
    }
}

void add_beg(int items)
{
    newnode = malloc(sizeof(struct node));
    newnode->data = items;
    newnode->previous = NULL;
    newnode->next = head;
    head = newnode;
}

void add_last(int items)
{
    newnode = malloc(sizeof(struct node));
    newnode->data = items;
    newnode->next = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->previous = temp;
    temp = newnode;
}

void dis()
{
    temp = head;
    while (temp != NULL)
    {

        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void delbeg()
{
    if (head == NULL)
    {
        printf("Empty list");
    }
    else
    {
        temp = head;
        head = temp->next;
        head->previous = NULL;
        free(temp);
    }
}
void dellast()
{
    if (head == NULL)
    {
        printf("Empty list");
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->previous = NULL;

        free(temp);
    }
}

int main()
{
    createdll(10);
    createdll(100);
    createdll(200);
    createdll(20);

    dellast();
    dis();

    return 0;
}
