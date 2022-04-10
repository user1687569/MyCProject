/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main()
{
    int array[] = {12, 34, 56, 78, 100, 25, 18, 20, 80};
    int largest, secondLargest;

    find_two_largest(array, 9, &largest, &secondLargest);
    printf("Largest element is: %d\n", largest);
    printf("Second largest element is: %d\n", secondLargest);

    return 0;
}


void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    if(a[0] > a[1])
    {
        *largest = a[0];
        *second_largest = a[1];
    }
    else
    {
        *largest = a[1];
        *second_largest = a[0];
    }

    for (int i = 2; i < n; i++)
    {
        if(a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if(a[i] > *second_largest)
        {
            *second_largest = a[i];
        }
    }
}


