//Copyright (c) 2022 user1687569
#include <stdio.h>

int compareDate(int monthA, int dayA, int yearA,
                int monthB, int dayB, int yearB);

int main()
{   
    int flag = 0;
    int month, day, year;
    int monthEarly, dayEarly, yearEarly;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    monthEarly = month;
    dayEarly = day;
    yearEarly = year;

    while (1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        
        if(month == 0 && day == 0 && year == 0)
            break;

        flag = compareDate(monthEarly, dayEarly, yearEarly,
                    month, day, year);

        if(flag == 1)
        {
            monthEarly = month;
            dayEarly = day;
            yearEarly = year;
        }
    }

    printf("%d/%d/%02d is the earliest date\n", monthEarly, dayEarly, yearEarly);
    
    return 0;
}


int compareDate(int monthA, int dayA, int yearA,
                int monthB, int dayB, int yearB)
{
    int flag = 0;

    if(yearA < yearB)
        flag = -1;
    else if(yearA > yearB)
        flag = 1;
    else if(monthA < monthB)
        flag = -1;
    else if(monthA > monthB)
        flag = 1;
    else if(dayA < dayB)
        flag = -1;
    else if(dayA > dayB)
        flag = 1;
    
    return flag;
}



