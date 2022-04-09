//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int power1(int x, int n);
int power2(int x, int n);

int main()
{
    int num, pow;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter power: ");
    scanf("%d", &pow);

    printf("Power1 result: %d\n", power1(num, pow));
    printf("Power2 result: %d\n", power2(num, pow));
    return 0;
}


int power1(int x, int n)
{
    if(n == 0)
        return 1;
    else if(n % 2)
    {
        return x * power1(x, n / 2) * power1(x, n / 2);
    }
    else
    {
        return x * power1(x, n - 1);
    }
}


int power2(int x, int n)
{
    if(n == 0)
        return 1;
    else
        return x * power2(x, n - 1);
}


