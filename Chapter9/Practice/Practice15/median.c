/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

double median(double x, double y, double z);

int main()
{
    double xx, yy, zz;
    srand((unsigned) time(NULL));

    for (;;)
    {
        xx = 10.0 + (rand() % 100) / 10.0;
        yy = 10.0 + (rand() % 100) / 10.0;
        zz = 10.0 + (rand() % 100) / 10.0;

        printf("x = %.2f, y = %.2f, z = %.2f. Median = %.2f\n", xx, yy, zz, median(xx, yy, zz));
        printf("Press 'q' to quit: ");
        if(getchar() == 'q')
            break;
    }
    
    return 0;
}


double median(double x, double y, double z)
{
    double middleNum = 0;

    if(x <= y)
    {
        if(y <= z)
            middleNum = y;
        else if(x <= z)
            middleNum = z;
        else
            middleNum = x;
    }
    else if (z <= y)
    {
        middleNum = y;
    }
    else if(x <= z)
    {
        middleNum = x;
    }
    
    return middleNum;
}


