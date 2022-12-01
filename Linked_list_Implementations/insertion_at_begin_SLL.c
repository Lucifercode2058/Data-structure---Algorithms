#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 struct node *head = NULL;
    struct node *newnode, *temp;
    int choice;

int main()


{
    
     

   
    
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
          printf("Enter the data");
        scanf("%d", &newnode->data);
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter the choise 0 or 1");
        scanf("%d", &choice);
    }

    temp = head;
    while (temp != 0)
    {
        printf("The data of linked list is %d", temp->data);
        temp = temp->next;
    }
    return 0;
}