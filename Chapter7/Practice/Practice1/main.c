/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>

void func1();
void func2();
void func3();

int main()
{
    // func1();
    // func2();
    // func3();
    return 0;
}


void func1()
{
    printf("Convert to a decimal value: \n");
    printf("077 = %d\n", 077);
    printf("0x77 = %d\n", 0x77);
    printf("0XABC = %d\n", 0XABC);
}


void func2()
{
    printf("010E2 = %f\n", 010E2);          /* OK */
    printf("32.1E+5 = %f\n", 32.1E+5);      /* OK */
    // printf("0790 = %d\n", 0790);         /* Wrong */
    // printf("100_000 = %d\n", 100_000);   /* Wrong */
    printf("3.978e-2 = %f\n", 3.978e-2);    /* OK */
}


void func3()
{
    short unsigned int num1;
    // short float num2;           /* Invalid */
    long double num3;
    unsigned long num4;
}

