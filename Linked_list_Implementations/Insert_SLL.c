//Delete nodes;
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};

struct node *head,*previous,*temp,*newnode;
void createnode(int item){
    newnode=malloc(sizeof(struct node));
    
    if (head==NULL)
    {
      head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    newnode->data=item;
    
    
}

void add_beg(int item){
    newnode=malloc(sizeof(struct node));
     newnode->data=item;
    if (head==NULL)
    {
       printf("only one node");

    }
    
   else{
 newnode->next=head;
    head=newnode;
   }
   
    
    
    
}
void display(){
    temp=head;
    while (temp!=NULL)
    {
       
       printf("Elements of list are %d",temp->data);
       temp=temp->next;
       

    }
    
}

int main(){
    
    add_beg(10);
    createnode(10);
    createnode(20);
    add_beg(40);
    add_beg(200);
    display();
    return 0;
}