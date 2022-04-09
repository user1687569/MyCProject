/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

int gcd(int m, int n);

int main()
{
    int m;
    int n;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    printf("Greatest common divisor: %d\n", gcd(m, n));

    return 0;
}


int gcd(int m, int n)
{
    int remainder;

    while (1)
    {
        if(n == 0)
            break;
        remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}
