#include<stdio.h>
#include<stdlib.h>
struct node //NOde
{
    int data;
    struct node *link;
};

struct node *add_last(struct node *ptr,int items){
struct node *new=malloc(sizeof(struct node));
new->data=items;
new->link=NULL;
ptr->link=new;
ptr=new;
return ptr;

}
int main(){
struct node *head=malloc(sizeof(struct node));
head->data=20;
head->link=NULL;
struct node *ptr=malloc(sizeof(struct node));
ptr->data=30;
ptr->link=NULL;
head->link=ptr;
ptr=add_last(ptr,50);
ptr=head;
while (ptr!=NULL)
{
    printf("%d",ptr->data);
    ptr=ptr->link;
}
return 0;

}

