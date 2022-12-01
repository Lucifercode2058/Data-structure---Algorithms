#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp, *newnode;
void createnode(int items)
{
    newnode = malloc(sizeof(struct node));
    newnode->data = items;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;

        temp = newnode;
    }
    temp->next = head;
}

void dis()
{
    temp = head;
    if (head == NULL)
    {
        printf("Nothing");
    }
    else
    {
        while (temp->next != head)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}
void add_beg(int items){
    newnode=malloc(sizeof(struct node));
    newnode->data=items;
    if (head==NULL)
    {
        head=newnode;
       
    }
    else{
        temp=head;
       while (temp->next!=head)
       {
       temp=temp->next;
       }
       newnode->next=temp->next;

       head=newnode;
       temp=newnode;


    }
    
}


int main()
{
    createnode(10);
    createnode(20);
    createnode(50);
    add_beg(60);
    dis();
}