/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>

void func6();
void func7();
void func8();
void func88();
void func9();

int main()
{
    func6();
    func7();
    // func8();
    func88();
    func9();
    return 0;
}


void func6()
{
    int i;
    for(i = 1; i <= 128; i *= 2)
    {
        printf("%d ", i);       /* 1 2 4 8 16 32 64 128 */
    }
    printf("\n");
}


void func7()
{
    int i;
    for(i = 9384; i > 0; i /= 10)
    {
        printf("%d ", i);       /*  9384 938 93 9 */
    }
    printf("\n");
}   


void func8()
{
    int i;
    for(i = 10; i >= 1; i /= 2)
        printf("%d ", i++);     /* 10 5 3 2 1 1 1 1 1 1 1 1 1 1 .... 1 1 1 */ 

    printf("\n");
}


void func88()
{
    int i;
    for(i = 10; i > 1; i /= 2)
        printf("%d ", i++);     /* 10 5 3 2 */ 

    printf("\n");
}


void func9()
{
    int i = 10;
    while (i > 1)
    {
        printf("%d ", i++);     /* 10 5 3 2 */ 
        i /= 2;
    }
    
    printf("\n");
}

