#include<stdio.h>
#include<stdlib.h>
struct node //NOde
{
    int data;
    struct node *link;
};
struct node *add_beg(struct node *head,int items){//structure function
struct node *ptr=malloc(sizeof(struct node));
ptr->data=items;
ptr->link=head;///main parts!!!!!!!!!!!!!!!!!!!!!
head=ptr;
return head;//should return;
}
int main(){
struct node *head=malloc(sizeof(struct node));
head->data=20;
head->link=NULL;
struct node *ptr=malloc(sizeof(struct node));
ptr->data=30;
ptr->link=NULL;
head->link=ptr;
head=add_beg(head,10);
ptr=head;
while(ptr!=NULL){
    printf("The data is %d\n",ptr->data);
    ptr=ptr->link;
}
return 0;

}


