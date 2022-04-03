//Copyright (c) 2022 user1687569
#include <stdio.h>

#define PI 3.1415927

int main()
{
    float radius = 10.0f;
    double volume;

    // volume = 4 / 3 * PI * radius * radius * radius;
    volume = 4.0f / 3.0f * PI * radius * radius * radius;
    printf("Volume = %f\n", volume);

    return 0;
}

