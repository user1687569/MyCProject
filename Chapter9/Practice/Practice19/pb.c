/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void pb(int n);


int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    pb(number);
    printf("\n");

    return 0;
}


void pb(int n)
{
    if(n != 0)
    {
        pb(n / 2);
        putchar('O' + n % 2);
    }
}
