//Copyright (c) 2022 user1687569
#include <stdio.h>

/*
 *输入一个分数, 然后将其约分为最简分式
 *numerator 分子
 *denominator 分母
 */
int main()
{   
    int numerator, denominator;
    int m, n;
    int remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
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

    printf("In lowest terms: %d/%d\n", numerator/m, denominator/m);
    
    return 0;
}



