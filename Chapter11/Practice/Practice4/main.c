/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

void swap(int *p, int *q);

int main()
{
    int i = 5;
    int j = 9;

    printf("i = %d, j = %d\n", i, j);
    
    swap(&i, &j);
    printf("After swap\n");
    printf("i = %d, j = %d\n", i, j);

    return 0;
}


void swap(int *p, int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

