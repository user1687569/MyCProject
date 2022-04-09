/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>

int maxItem(int a[], int n);
double getAverage(int a[], int n);
int getPositiveNum(int a[], int n);

int main()
{
    int array[] = {-2, -1, 0, 1, 20, 3, 4, 5};
    printf("Max item in array is: %d\n", maxItem(array, 8));

    double average;
    average = getAverage(array, 8);
    printf("Average value of array is: %lf\n", average);

    int count = 0;
    count = getPositiveNum(array, 8);
    printf("Count of Positive number in array is: %d\n", count);

    return 0;
}

int maxItem(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    return max;
}


double getAverage(int a[], int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return sum / n;
}


int getPositiveNum(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] >= 0)
            count++;
    }

    return count;
}

