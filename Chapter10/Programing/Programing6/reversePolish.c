/*
 * Copyright (c) 2022 user1687569
 */

/*
 * Reverse Polish Notation, RPN 逆波兰表示法
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE      100
#define TRUE_STRING     "True"
#define FALSE_STRING    "False"

/* external variables */
int contents[STACK_SIZE] = {0};
int top = 0;

void printContents();

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


int peekTop(void)
{
    if(is_empty())
    {
        stack_underflow();
        return 0;
    }
    else
        return contents[top];
}


void printContents()
{
    for (int i = 0; i < top; i++)
    {
        printf("%3d", contents[i]);
    }
    printf("\n");
}

int main()
{
    char ch;
    int num1, num2;

    for (;;)
    {
        make_empty();
        printf("Enter an RPN expression: ");
        while ((ch = getchar()) != '\n')
        {
            if(isdigit(ch))
            {
                push(ch - '0');
            }
            else if(ch == '+' || ch == '-' || ch == '/' || ch == '*')
            {
                num2 = pop();
                num1 = pop();
                switch (ch)
                {
                case '+':   push(num1 + num2);  break;
                case '-':   push(num1 - num2);  break;
                case '/':   push(num1 / num2);  break;
                case '*':   push(num1 * num2);  break;
                default:                        break;
                }
            }
            else if(ch == '=')
            {
                printf("Value of expression: %d\n", pop());
                break;
            }
            else if(ch == 'q')
                exit(EXIT_FAILURE);
        }
    }

    exit(EXIT_SUCCESS);
}


