//Copyright (c) 2022 user1687569
/*
 * Computes a Universal Product Code check digit
*/
#include <stdio.h>

int main()
{
    int i = 1;
    int j = 2;
    int k;

    k = ++i + j++;

    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("k = %d\n", k);

    return 0;
}

// i = 2
// j = 3
// k = 4

