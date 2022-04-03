/*
 *Copyright (c) 2022 user1687569
 */
#include <stdio.h>

int main(void)
{
    int flag = 0;
    int month1, day1, year1;
    int month2, day2, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("Enter second date (mm/dd//yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if(year1 < year2)
        flag = 1;
    else if(year1 > year2)
        flag = 2;
    else if(month1 < month2)
        flag = 1;
    else if(month1 > month2)
        flag = 2;
    else if(day1 < day2)
        flag = 1;
    else if(day1 > day2)
        flag = 2;
    
    if(flag == 1)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", 
                    month1, day1, year1,
                    month2, day2, year2);
    else if(flag == 2)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", 
                    month2, day2, year2,
                    month1, day1, year1);

    return 0;
}

