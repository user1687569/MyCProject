/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main()
{
    long total_sec;
    int hour, minute, second;

    while (1)
    {
        printf("Enter total seconds: ");
        scanf("%ld", &total_sec);
        if(total_sec == 0)
            break;
        split_time(total_sec, &hour, &minute, &second);
        printf("Equivalent time is: %2d:%2d:%2d\n", hour, minute, second);
    }
    
    return 0;
}


void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *sec = total_sec % 60;
    total_sec /= 60;
    *min = total_sec % 60;
    *hr = total_sec /= 60;
}
