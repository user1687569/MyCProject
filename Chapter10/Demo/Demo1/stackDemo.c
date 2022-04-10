//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdbool.h>    /* C99 only */

#define STACK_SIZE      100
#define TRUE_STRING     "True"
#define FALSE_STRING    "False"

/* external variables */
int contents[STACK_SIZE] = {0};
int top = 0;

void stack_overflow()
{
    printf("stack overflow.\n");
}

void stack_underflow()
{
    printf("stack underflow.\n");
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if(is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if(is_empty())
    {
        stack_underflow();
        return 0;
    }
    else
        return contents[--top];
}

int main()
{
    printf("Stack is full or not? %s\n", is_full() == true ? TRUE_STRING : FALSE_STRING);
    printf("Stack is empty or not? %s\n", is_empty() == true ? TRUE_STRING : FALSE_STRING);
    push(1);
    push(2);
    push(3);
    printf("Stack is full or not? %s\n", is_full() == true ? TRUE_STRING : FALSE_STRING);
    printf("Stack is empty or not? %s\n", is_empty() == true ? TRUE_STRING : FALSE_STRING);

    printf("Stack pop: %d\n", pop());
    printf("Stack pop: %d\n", pop());
    printf("Stack pop: %d\n", pop());
    printf("Stack pop: %d\n", pop());
    printf("Stack pop: %d\n", pop());

    push(6);
    push(7);
    make_empty();
    printf("Stack pop: %d\n", pop());

    return 0;
}


