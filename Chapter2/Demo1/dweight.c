//Copyright (c) 2022 user1687569
#include <stdio.h>

#define INCHES_PER_POUND    166
#define RECIPROCAL_OF_PI    (1.0f / 3.14159f)


int main()
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}

