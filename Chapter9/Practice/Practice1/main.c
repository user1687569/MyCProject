/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

double triangle_area(double base, double height);

int main()
{
    printf("Triangle area: %lf\n", 
                triangle_area(2.0, 2.0));
    return 0;
}


double triangle_area(double base, double height)
{
    double product;
    product = base * height;
    return product / 2;
}
