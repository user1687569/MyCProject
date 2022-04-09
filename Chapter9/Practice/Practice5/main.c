/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>

int num_digits(int n);

int main()
{
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    printf("Num of digits is: %d\n", num_digits(number));
    return 0;
}


int num_digits(int n)
{
    int nCount = 0;

    do
    {
        n /= 10;
        nCount++;
    } while (n > 0);
    
    return nCount;
}
