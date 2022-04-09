/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>

int digit(int n, int k);

int main()
{
    int number;
    int position;

    printf("Enter a positive number: ");
    scanf("%d", &number);
    printf("Pick a position: ");
    scanf("%d", &position);

    printf("Digit in position is: %d\n", digit(number, position));
    return 0;
}


int digit(int n, int k)
{
    int nCount = 1;
    int retDigit = 0;

    do
    {
        if(nCount == k)
        {
            retDigit = n % 10;
            break;
        }
        n /= 10;
        nCount++;
    } while (n > 0);
    
    return retDigit;
}
