/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 *输入一个分数, 然后将其约分为最简分式
 *numerator 分子
 *denominator 分母
 */
void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

int main()
{   
    int numerator, denominator;
    int reducedNume, reducedDeno;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reducedNume, &reducedDeno);
    printf("In lowest terms: %d/%d\n", reducedNume, reducedDeno);
    return 0;
}


void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int m, n;
    int remainder;
    n = numerator;
    m = denominator;

    while (1)
    {
        if(n == 0)
            break;
        remainder = m % n;
        m = n;
        n = remainder;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}

