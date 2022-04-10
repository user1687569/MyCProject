//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>    /* C99 only */

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main()
{
    int amount;
    int n20 = 0, n10 = 0, n5 = 0, n = 0;

    printf("Enter an dollar amount: ");
    scanf("%d", &amount);

    pay_amount(amount, &n20, &n10, &n5, &n);
    
    printf("$20 bills: %d\n", n20);
    printf("$10 bills: %d\n", n10);
    printf(" $5 bills: %d\n", n5);
    printf(" $1 bills: %d\n", n);
    
    exit(EXIT_SUCCESS);
}


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars = dollars % 20;
    *tens = dollars / 10;
    dollars = dollars % 10;
    *fives = dollars / 5;
    dollars = dollars % 5;
    *ones = dollars;
}

