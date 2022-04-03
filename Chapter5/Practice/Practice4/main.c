/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>

int main()
{
    int i, j;

    printf("Please enter a number: ");
    scanf("%d", &i);
    printf("Please enter another number: ");
    scanf("%d", &j);

    if(i < j)
        printf("Comparision result: -1");
    else if(i > j)
        printf("Comparision result:  1");
    else
        printf("Comparision result:  0");

    return 0;
}





