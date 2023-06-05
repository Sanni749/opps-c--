#include <stdio.h>
#include <stdlib.h>
#define N 5
int stack[N];
int top = -1;
void push();
void pop();
void display();
int main()
{
    int choice;
    char ch;
    // clrscr();
    do
    {
        printf("\n 1= push");
        printf("\n 2= pop");
        printf("\n 3= display");
        printf("\n enter your choice:-");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
            printf("\n you entered a wromg choice");
        }
        printf("\n do you want to continue(y/n)");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');
}
void push()
{
    int item;
    if (top == N - 1)
    {
        printf("\n stack is full");
    }
    else
    {
        printf("\n enter the element to be inserted:-");
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("stack undeflow.");
        exit(0);
    }
    else
    {
        item = stack[top];
        top--;
        printf("\n%d is deleted", item);
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}