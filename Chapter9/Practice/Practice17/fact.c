/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int fact(int n);

int main()
{
    printf("Factional result is: %d\n", fact(6));
    
    return 0;
}


int fact(int n)
{
    int retValue = 1;
    while (n)
    {
        retValue *= n--;
    }
    
    return retValue;
}


