//Copyright (c) 2022 user1687569
#include <stdio.h>

void funcShortInt();
void funcLong();

int main()
{
    funcShortInt();
    funcLong();
    
    return 0;
}


void funcShortInt()
{
    short int n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers(0 to terminate): ");

    scanf("%hd", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%hd", &n);
    }

    printf("The sum is: %hd\n", sum);
}


void funcLong()
{
    long n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers(0 to terminate): ");

    scanf("%ld", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%ld", &n);
    }

    printf("The sum is: %ld\n", sum);
}

