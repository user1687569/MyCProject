//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int polynomial(int x);
int polynomial2(int x);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Polynomial result: %d\n", polynomial(x));
    printf("Polynomial2 result: %d\n", polynomial2(x));
    return 0;
}


int polynomial(int x)
{
    return  3 * x * x * x * x * x +
            2 * x * x * x * x -
            5 * x * x * x -
            1 * x * x +
            7 * x - 6;
}


int polynomial2(int x)
{
    return  x * (x * (x * (x * (3 * x + 2) - 5) - 1) + 7) - 6;
}


