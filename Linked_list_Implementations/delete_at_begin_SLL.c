#include <stdio.h>
#include <stdlib.h>
struct node *previous, *head = NULL, *temp, *newnode;
struct node
{
    int data;
    struct node *next;
};
void createnode(int item)
{
    newnode = malloc(sizeof(struct node));

    if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
    newnode->data = item;
}

void display(){
    temp=head;
    while (temp!=NULL)
    {
       
       printf("Elements of list are %d\n",temp->data);
       temp=temp->next;
       

    }
    
}

void delete(){
    if (head==NULL)
    {
        printf("NO things to delete");
    }
    else{
    temp=head;
    head=temp->next;
    free(temp);

    }
    
}

int main(){
    createnode(10);
    createnode(13);
    createnode(31);
    delete();
    delete();
    display();
    return 0;
}