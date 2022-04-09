/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

int check(int x, int y, int n);

int main()
{
    int x = 3;
    int y = 12;
    int n = 10;

    printf("Check result: %d\n", check(x, y, n));
    return 0;
}


int check(int x, int y, int n)
{
    if(x >= 0 && x <= n-1 && y >= 0 && y <= n-1)
        return 1;
    return 0;
}
