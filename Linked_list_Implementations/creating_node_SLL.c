#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    //only head can access the struct node elements;
    struct node *head=NULL;//struct node base adress
    head=(struct node *)malloc(sizeof(struct node));//DMA to head
    head->data=50;//initialization of data through arrow
head->link=NULL;//keeping null to the link part
printf("The data is %d",head->data);//printing the data through head
return 0;


}