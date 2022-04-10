//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>    /* C99 only */

#define STACK_SIZE      100
#define TRUE_STRING     "True"
#define FALSE_STRING    "False"

/* external variables */
char contents[STACK_SIZE] = {0};
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

void push(char ch)
{
    if(is_full())
        stack_overflow();
    else
        contents[top++] = ch;
}

char pop(void)
{
    if(is_empty())
    {
        stack_underflow();
        return 0;
    }
    else
        return contents[--top];
}

// ASCII码
// ( ==> 40
// ) ==> 41
// { ==> 123
// } ==> 125

int main()
{
    char ch;
    char popItem;

    make_empty();
    printf("Enter character: \n");
    while ((ch = getchar()) != '\n')
    {
        if(ch == '(' || ch == '{')
            push(ch);
        else if(ch == ')')
        {
            popItem = pop();
            if(popItem == '(')
                ;
            else
            {
                printf("Parenteses/braces are not nested properly!\n");
                exit(EXIT_FAILURE);
            }
        }
        else if(ch == '}')
        {
            popItem = pop();
            if(popItem == '{')
                ;
            else
            {
                printf("Parenteses/braces are not nested properly!\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    if(is_empty())
        printf("Parenteses/braces are nested properly!\n");
    else
        printf("Parenteses/braces are not nested properly!\n");
    
    exit(EXIT_SUCCESS);
}



