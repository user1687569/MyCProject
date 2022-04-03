//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("((((3x+2)x - 5)x - 1)x + 7)x - 6= %d\n", 
            ((((3 * x+2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}

