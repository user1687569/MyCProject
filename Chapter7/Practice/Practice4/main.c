/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <ctype.h>

void func4();
void func5();
void func6();
void func7();
void func8();

int main()
{
    // func4();
    // func5();
    // func7();
    func8();
    return 0;
}


void func4()
{
    int i = 10;
    char c = 'A';
    i += c;
    printf("i = %d\n", i);

    // c = 2 * c - 1;
    c = 2 * c - 50;
    if(isprint(c))
        printf("c = %c\n", c);
    else
        printf("c = %x\n", c);
    
    putchar(c);
    putchar('\n');
    // printf(c);      /* Invalid */
}


void func5()
{
    printf("%d\n", 'A');            /* OK */
    printf("%d\n", 0b1000001);      /* OK */
    printf("%d\n", 0101);           /* OK */
    printf("%d\n", 0x41);           /* OK */
}


void func6()
{
    char dayOfMonth;
    short int dayOfYear;
    short minuteOfDay;
    long secondOfDay;
}


void func7()
{
    printf("%#o\n", '\b');      /* 010 */  
    printf("%#o\n", '\n');      /* 012 */
    printf("%#o\n", '\r');      /* 015 */
    printf("%#o\n", '\t');      /* 011 */
}


void func8()
{
    printf("%#x\n", '\b');      /* 0x8 */  
    printf("%#x\n", '\n');      /* 0xa */
    printf("%#x\n", '\r');      /* 0xd */
    printf("%#x\n", '\t');      /* 0x9 */
}



