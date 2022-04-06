//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*
 * 牛顿方法计算正浮点数的平方根
 */
int main()
{
    float number = 0.0f;
    float root;
    float midValue;

    printf("Enter a positive number: ");
    scanf("%f", &number);

    root = 1.0f;
    while (1)
    {
        midValue = number / root;
        if(fabs(midValue - root) < 0.00001f)
            break;
        root = (midValue + root) / 2;
    }

    printf("Square root: %f\n", root);
    return 0;
}

