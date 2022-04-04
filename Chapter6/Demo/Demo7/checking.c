/*
 *Copyright (c) 2022 user1687569
 */
#include <stdio.h>


int main()
{
    int d, n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    for(d = 2; d < n; d++)
        if(n % d == 0)
            goto DONE;

DONE:
    if(d < n)
        printf("%d is divisible by %d\n", n, d);
    else
        printf("%d is prime\n", n);
    return 0;
}

