//Copyright (c) 2022 user1687569
#include <stdio.h>

#define INCHES_PER_POUND    166
#define RECIPROCAL_OF_PI    (1.0f / 3.14159f)

int main()
{
    int height = 8, length = 12, width = 10, volume ;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}

