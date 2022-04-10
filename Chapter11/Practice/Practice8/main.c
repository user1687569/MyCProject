/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

int *find_largest(int a[], int n);

int main()
{
    int array[] = {12, 35, 46, 100, 33, 68};
    int *p;

    p = find_largest(array, 6);
    printf("Largest element is: %d\n", *p);

    return 0;
}


int *find_largest(int a[], int n)
{
    int *pMax;
    pMax = &a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i] > *pMax)
            pMax = &a[i];
    }
    
    return pMax;
}
