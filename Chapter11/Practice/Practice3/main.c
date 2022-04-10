/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>


void avg_sum(double a[], int n, double *avg, double *sum);


int main()
{
    double array[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double sum = 0.0;
    double avg = 0.0;

    avg_sum(array, 5, &avg, &sum);
    printf("Sum of array elements: %.2f\n", sum);
    printf("Average of array elements: %.2f\n", avg);

    return 0;
}


void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];

    *avg = *sum / n;
}

