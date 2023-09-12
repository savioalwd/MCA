#include <stdio.h>

int a[100], i, top = -1, MAX = 100;

int isFull()
{
    if (top >= MAX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if (top <= -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push()
{
    if (isFull())
    {
        printf("Stack is full");
    }
    else
    {
        printf("Enter the element");
        top++;
        scanf("%d", &a[top]);
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d is popped from stack", a[top]);
        top--;
    }
}

void peek()
{
    if (isEmpty())
    {
        printf("stack is empty");
    }
    else
    {
        printf("top element is %d", a[top]);
    }
}

void display()
{
    for (i = 0; i <= top; i++)
    {
        printf("%d\t", a[i]);
    }
}

void main()
{
    int opt = 1;
    while (opt)
    {
        printf("\n\n...................\n");
        printf("1) PUSH\n");
        printf("2) POP\n");
        printf("3) PEEK\n");
        printf("4) DISPLAY\n");
        printf("0) QUIET\n\n");
        printf("choose your option : ");
        scanf("%d", &opt);
        printf("\n\n...................\n");
        switch (opt)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("Invalid option! Try Again.");
        }
    }
}