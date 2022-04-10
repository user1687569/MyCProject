/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

const int dayOfMonth1[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};   /* Leap year */
const int dayOfMonth2[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};   /* Not leap year */

void split_date(int day_of_year, int year, int *month, int *day);

int main()
{
    int dayOfYear;
    int year;
    int month;
    int day;

    while (1)
    {
        printf("Enter day of year: ");
        scanf("%d", &dayOfYear);
        if(dayOfYear == 0)
            break;
        printf("Enter year: ");
        scanf("%d", &year);

        split_date(dayOfYear, year, &month, &day);
        printf("Month:%2d, Day:%2d\n", month, day);
    }

    return 0;
}


void split_date(int day_of_year, int year, int *month, int *day)
{
    int count = 0;
    bool leapYear = false;
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        leapYear = true;

    if(leapYear == true)
    {
        while (day_of_year > 0)
        {
            day_of_year -= dayOfMonth1[count++];
        }

        *month = count;
        *day = day_of_year + dayOfMonth1[count - 1];
    }
    else
    {
        while (day_of_year > 0)
        {
            day_of_year -= dayOfMonth2[count++];
        }

        *month = count;
        *day = day_of_year + dayOfMonth2[count - 1];
    }
}

