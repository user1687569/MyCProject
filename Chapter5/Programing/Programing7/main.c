/*
 *Copyright (c) 2022 user1687569
 */
#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4;
    int max, max1, max2;
    int min, min1, min2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if(num1 > num2)
    {
        max1 = num1;
        min1 = num2;
    }
    else
    {
        max1 = num2;
        min1 = num1;
    }

    if(num3 > num4)
    {
        max2 = num3;
        min2 = num4;
    }
    else
    {
        max2 = num4;
        min2 = num3;
    }

    if(max1 > max2)
        max = max1;
    else
        max = max2;
    
    if(min1 < min2)
        min = min1;
    else
        min = min2;

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}

