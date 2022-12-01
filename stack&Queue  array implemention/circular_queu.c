

#include <stdio.h>
#include <stdlib.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;
void enqueue(int data)
{
    if ((rear + 1) % max == front)
    {
        printf("circlular queue is full");
    }

    else if (rear == -1 && front == -1)
    {
        rear = front = 0;
        queue[rear] = data;
    }

    else
    {
        rear = (rear + 1) % max;
        queue[rear] = data;
    }
}

void dequeue()
{

    if (rear == -1 && front == -1)
    {
        printf("Queue is empty!");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {

        front = (front + 1) % max;
    }
}

void dis()
{
    int i = front;
    if (rear == -1 && front == -1)
    {
        printf("Queue is empty!");
    }
    else
    {
        while (i != rear)
        {

            printf("%d\n", queue[i]);
            i = (i + 1) % max;
        }
        printf(" %d\n", queue[rear]);
    }
}

void peek()
{

    printf("First element is %d", queue[front]);
}
int main()
{
    enqueue(100);
    enqueue(20);
    enqueue(50);
    enqueue(100);

    dequeue();
    dequeue();
    dequeue();

    dis();
    peek();
}