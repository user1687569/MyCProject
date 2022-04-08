/*
 *Copyright (c) 2022 user1687569
 */
#include <stdio.h>

#define  _8_00_AM   (8 *60)
#define  _9_43_AM   (9 *60+43)
#define _11_19_AM   (11*60+19)
#define _12_47_PM   (12*60+47)
#define  _2_00_PM   (14*60)
#define  _3_45_PM   (15*60+45)
#define  _7_00_PM   (19*60)
#define  _9_45_PM   (21*60+45)


enum {
    FLAG_8_00_AM = 0,
    FLAG_9_43_AM,
    FLAG_11_19_AM,
    FLAG_12_47_PM,
    FLAG_2_00_PM,
    FLAG_3_45_PM,
    FLAG_7_00_PM,
    FLAG_9_45_PM
};


int main(void)
{
    int i;
    int flag;
    int hour, minute;
    int totalMinute;

    int departureTime[8] = {_8_00_AM, _9_43_AM, _11_19_AM, _12_47_PM,
                            _2_00_PM, _3_45_PM, _7_00_PM, _9_45_PM};
    
    printf("Enter a 24-huor time: ");
    scanf("%d:%d", &hour, &minute);

    while (hour != 0 || minute != 0)
    {
        totalMinute = hour * 60 + minute;
        for (i = 0; i < 8; i++)
        {
            if(totalMinute < departureTime[i])
                break;
        }
        
        if(i == 0)
            flag = i;
        else if(i == 8)
            flag = i - 1;
        else
        {
            if(totalMinute - departureTime[i-1] > departureTime[i] - totalMinute)
                flag = i;
            else
                flag = i - 1;
        }

        switch (flag)
        {
        case FLAG_8_00_AM:
            printf("Closest departure time is  8:00 a.m., arriving at 10:16 a.m.\n");
            break;
        case FLAG_9_43_AM:
            printf("Closest departure time is  9:43 a.m., arriving at 11:52 a.m.\n");
            break;
        case FLAG_11_19_AM:
            printf("Closest departure time is 11:19 a.m., arriving at  1:31 p.m.\n");
            break;
        case FLAG_12_47_PM:
            printf("Closest departure time is 12:47 p.m., arriving at  3:00 p.m.\n");
            break;
        case FLAG_2_00_PM:
            printf("Closest departure time is  2:00 p.m., arriving at  4:08 p.m.\n");
            break;
        case FLAG_3_45_PM:
            printf("Closest departure time is  3:45 p.m., arriving at  5:55 p.m.\n");
            break;
        case FLAG_7_00_PM:
            printf("Closest departure time is  7:00 p.m., arriving at  9:20 p.m.\n");
            break;
        case FLAG_9_45_PM:
            printf("Closest departure time is  9:45 p.m., arriving at 11:58 p.m.\n");
            break;
        default:
            break;
        }

        printf("Enter a 24-huor time: ");
        scanf("%d:%d", &hour, &minute);
    }

    return 0;
}



