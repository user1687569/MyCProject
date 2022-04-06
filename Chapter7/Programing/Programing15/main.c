//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void funcShort();
void funcInt();
void funcLong();
void funcLongLong();
void funcFloat();
void funcDouble();
void funcLongDouble();


int main()
{
    // funcShort();
    // funcInt();
    // funcLong();
    // funcLongLong();
    // funcFloat();
    funcDouble();
    // funcLongDouble();
    return 0;
}


// i = 7, sum = 5040
// i = 8, sum = -25216
void funcShort()
{
    short int n;
    short int sum = 1;

    printf("Enter a positive integer(short): ");
    scanf("%hd", &n);
    for (short int i = 1; i <= n; i++)
    {
        sum *= i;
        printf("i = %d, sum = %d\n", i, sum);
    }
}


// i = 16, sum = 2004189184
// i = 17, sum = -288522240
void funcInt()
{
    int n;
    int sum = 1;

    printf("Enter a positive integer(int): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
        printf("i = %d, sum = %d\n", i, sum);
    }
}


// i = 16, sum = 2004189184
// i = 17, sum = -288522240
void funcLong()
{
    int n;
    long int sum = 1L;

    printf("Enter a positive integer(long): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
        printf("i = %d, sum = %ld\n", i, sum);
    }
}

// i = 20, sum = 2432902008176640000
// i = 21, sum = -4249290049419214848
void funcLongLong()
{
    int n;
    long long int sum = 1LL;

    printf("Enter a positive integer(long long): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
        printf("i = %d, sum = %lld\n", i, sum);
    }
}


// i = 34, sum = 295232822996533290000000000000000000000.000000
// i = 35, sum = 1.#INF00
void funcFloat()
{
    int n;
    float sum = 1.0f;

    printf("Enter a positive integer(float): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
        printf("i = %d, sum = %f\n", i, sum);
    }
}


// i = 170, sum = 7257415615307994000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.000000
// i = 171, sum = 1.#INF00
void funcDouble()
{
    int n;
    double sum = 1.0;

    printf("Enter a positive integer(double): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
        printf("i = %d, sum = %.2lf\n", i, sum);
    }
}


void funcLongDouble()
{
    int n;
    long double sum = 1.0;

    printf("Enter a positive integer(long double): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
        printf("i = %d, sum = %.2lf\n", i, sum);
    }
}


