#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int Stack_array[MAX];
int top = -1;

void push(int data)
{
    if (top == (MAX - 1))
    {
        printf("STACK OVERFLOW or stack is full");
        return;
    }
    top = top + 1;
    Stack_array[top]=data;
}

int pop()
{
    int value;
    if (top == -1)
    {
        printf("Stack underflow or Empty stack");
        exit(1);
    }
    value = Stack_array[top];
    top = top - 1;
    return value;
}

void print()
{
    if (top == -1)
    {
        printf("Stack underflow or Empty stack");
        return;
    }
    for (int i = top; i>=0; i--)
    {
        printf("%d",Stack_array[i]);
        printf("\n");
    }
    
}

int main()
{
    int data;
    push(1);
    push(5);
    push(4);
    push(3);
    push(10);

    ;
    data = pop();
    print();
    return 0;
}
