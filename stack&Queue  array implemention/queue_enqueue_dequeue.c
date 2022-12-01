#include <stdio.h>
#include <stdlib.h>
#define max 7
int front = -1;
int rear = -1;
int queue[max];
void enqueue(int data)
{
    if (rear == max - 1)
    {
        printf("Queue overflow or isfull");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear = rear + 1;
        queue[rear] = data;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue underflow or empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
        printf("All elements are deleted\n");
    }
    else
    {
        printf("The deleted element of queue is %d\n", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1)
    {
        printf("Underflow\t");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("The elements of queue are %d\n", queue[i]);
        }
    }
}

int main()
{
    enqueue(5);
    enqueue(2);

    enqueue(200);
    enqueue(200);
    enqueue(200);

    enqueue(200);
    enqueue(200);
    enqueue(200);
    dequeue();
    dequeue();
    dequeue();

    display();

    return 0;
}