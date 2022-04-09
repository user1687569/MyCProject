/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <ctype.h>

double inner_product(double a[], double b[], int n);

int main()
{
    double a[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double b[] = {1.0, 1.0, 1.0, 1.0, 1.0};
    double summary = 0;

    summary = inner_product(a, b, 5);
    printf("Inner product result is: %.2lf\n", summary);

    return 0;
}


double inner_product(double a[], double b[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] * b[i];
    }

    return sum;
}

