#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
//linked of two nodes using two pointer variable 
int main(){
    struct node *head= malloc(sizeof(struct node));//can use malloc directly without using the type casting;
    head->data=30;
    head->link=NULL;
    struct node *current=malloc(sizeof(struct node));
    current->data=40;
    current->link=NULL;
    head->link=current;
    printf("The data of first node is %d and link is %d and data of second node is %d and link is %d",head->data,head->link,current->data,current->link);
    return 0;
}