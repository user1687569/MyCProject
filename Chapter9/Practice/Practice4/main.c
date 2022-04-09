/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>

int day_of_year(int month, int day, int year);

int main()
{
    int month, day, year;
    int dayCount = 0;

    printf("Enter month/day/year: ");
    scanf("%d/%d/%d", &month, &day, &year);
    dayCount = day_of_year(month, day, year);

    printf("The date you entered is %d day of year!\n", dayCount);
    return 0;
}


int day_of_year(int month, int day, int year)
{   
    int dayCount = 0;
                        /* 1   2   3   4   5   6   7   8   9   10  11  12 */
    int dayInMonth1[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayInMonth2[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if((year % 400 == 0) || 
       (year % 4 == 0 && year % 100 != 0))
    {
        for (int i = 0; i < month - 1; i++)
        {
            dayCount += dayInMonth2[i];
        }
    }
    else
    {
        for (int i = 0; i < month - 1; i++)
        {
            dayCount += dayInMonth1[i];
        }
    }

    dayCount += day;
    return dayCount;
}
