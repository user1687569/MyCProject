//Copyright (c) 2022 user1687569
#include <stdio.h>

#define PI 3.1415927

int main()
{
    float amount;

    printf("Enter an number: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f\n", amount * (1 + 0.05));

    return 0;
}

