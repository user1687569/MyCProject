//Copyright (c) 2022 user1687569
#include <stdio.h>

void funcShortInt();
void funcLong();
void funcDouble();

int main()
{
    // funcShortInt();
    // funcLong();
    funcDouble();
    
    return 0;
}


void funcShortInt()
{
    short int n, sum = 0;

    printf("This program sums a series of short integers.\n");
    printf("Enter short integers(0 to terminate): ");

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

    printf("This program sums a series of long integers.\n");
    printf("Enter long integers(0 to terminate): ");

    scanf("%ld", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%ld", &n);
    }

    printf("The sum is: %ld\n", sum);
}


void funcDouble()
{
    double n, sum = 0.0;

    printf("This program sums a series of double numbers.\n");
    printf("Enter double numbers(0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0.0)
    {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %lf\n", sum);
}

