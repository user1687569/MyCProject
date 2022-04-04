/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>

void func1();
void func2();
void func3();

int main()
{
    func1();
    func2();
    func3();
    return 0;
}


void func1()
{
    int i = 1;
    while (i <= 128)
    {
        printf("%d ", i);       /* 1 2 4 8 16 32 64 128 */
        i *= 2;
    }
    printf("\n");
}


void func2()
{
    int i = 9384;
    do
    {
        printf("%d ", i);       /* 9384 938 93 9 */
        i /= 10;
    } while (i > 0);
    printf("\n");
}


void func3()
{
    int i, j;
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);       /* 5 4 3 2 */
    printf("\n");
}

