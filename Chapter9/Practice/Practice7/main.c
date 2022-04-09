/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>

int f(int a, int b);

int main()
{
    int i;
    double x;

    i = f(83, 12);
    printf("i = %d\n", i);

    x = f(83, 12);
    printf("x = %lf\n", x);

    i = f(3.15, 9.28);
    printf("i = %d\n", i);

    x = f(3.15, 9.28);
    printf("x = %lf\n", x);

    printf("f(83, 12) = %d\n", f(83, 12));
    return 0;
}


int f(int a, int b)
{
    return a + b;
}