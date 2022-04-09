/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int calculateGCD(int numerator, int denominator);
int gcd(int numerator, int denominator);


int main()
{
    int firstNum;
    int secondNum;

    printf("Enter first number: ");
    scanf("%d", &firstNum);
    printf("Enter second number: ");
    scanf("%d", &secondNum);

    printf("Function gcd1 result: %d\n", calculateGCD(firstNum, secondNum));
    printf("Function gcd2 result: %d\n", gcd(firstNum, secondNum));

    return 0;
}


int calculateGCD(int numerator, int denominator)
{
    int m, n;
    int remainder;

    n = numerator > 0 ? numerator : -numerator;
    m = denominator > 0 ? denominator : -denominator;

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

int gcd(int numerator, int denominator)
{
    int m, n;

    n = numerator > 0 ? numerator : -numerator;
    m = denominator > 0 ? denominator : -denominator;

    return (n == 0) ? m : gcd(m % n, n);
}
