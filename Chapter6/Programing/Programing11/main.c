//Copyright (c) 2022 user1687569
#include <stdio.h>


int main()
{   
    float e = 0.0f;
    int n;

    printf("Please enter n: ");
    scanf("%d", &n);

    e = 1.0f;
    int denominator = 1;

    for (int i = 1; i <= n; i++)
    {
        denominator *= i;
        e += (1.0f / denominator);
    }

    printf("The mathematical constant e is approximately equal to %f", e);

    return 0;
}




