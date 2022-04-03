//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("3 * x^5 + 2 * x^4 - 5 * x^3 - x^2 + 7 * x - 6 = %d\n", 
            3 * x*x*x*x*x + 2 * x*x*x*x - 5 * x*x*x - x*x + 7 * x - 6);

    return 0;
}

