//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{
    float f, frac_part;

    f = 9.6;
    frac_part = f - (int)f;

    printf("frac_part = %f\n", frac_part);

    printf("Size of int: %d\n", sizeof(int));

    return 0;
}

