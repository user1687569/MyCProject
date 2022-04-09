/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool has_zero(int a[], int n);

int main()
{
    int array[]  = {1, 2, 3, 4, 5, 6};
    int array2[] = {1, 2, 3, 0, 5, 6};

    printf("Array has zero? %s\n", has_zero(array, 6) == true ? "True" : "False");
    printf("Array2 has zero? %s\n", has_zero(array2, 6) == true ? "True" : "False");

    return 0;
}


bool has_zero(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
            return true;
    }

    return false;
}
