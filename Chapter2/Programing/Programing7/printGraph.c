//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{
    int amount;
    int n20 = 0, n10 = 0, n5 = 0, n = 0;

    printf("Enter an dollar amount: ");
    scanf("%d", &amount);

    n20 = amount / 20;
    amount = amount % 20;
    n10 = amount / 10;
    amount = amount % 10;
    n5 = amount / 5;
    amount = amount % 5;
    n = amount;
    
    printf("$20 bills: %d\n", n20);
    printf("$10 bills: %d\n", n10);
    printf(" $5 bills: %d\n", n5);
    printf(" $1 bills: %d\n", n);

    return 0;
}

