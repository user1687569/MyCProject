/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* departure time */
#define  _8_00_AM   (8 *60)
#define  _9_43_AM   (9 *60+43)
#define _11_19_AM   (11*60+19)
#define _12_47_PM   (12*60+47)
#define  _2_00_PM   (14*60)
#define  _3_45_PM   (15*60+45)
#define  _7_00_PM   (19*60)
#define  _9_45_PM   (21*60+45)

/* arrival time */
#define _10_16_AM   (10*60+16)
#define _11_52_AM   (11*60+52)
#define  _1_31_PM   (13*60+31)
#define  _3_00_PM   (15*60+0)
#define  _4_08_PM   (16*60+8)
#define  _5_55_PM   (17*60+55)
#define  _9_20_PM   (21*60+20)
#define _11_58_PM   (23*60+58)


void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int hour, minute;
    int totalMinute;
    int departureTime;
    int arrivalTime;

    printf("Enter a 24-huor time: ");
    scanf("%d:%d", &hour, &minute);
    
    totalMinute = hour * 60 + minute;
    find_closest_flight(totalMinute, &departureTime, &arrivalTime);
    
    switch (departureTime)
    {
    case _8_00_AM:
        printf("Closest departure time is  8:00 a.m., arriving at 10:16 a.m.\n");
        break;
    case _9_43_AM:
        printf("Closest departure time is  9:43 a.m., arriving at 11:52 a.m.\n");
        break;
    case _11_19_AM:
        printf("Closest departure time is 11:19 a.m., arriving at  1:31 p.m.\n");
        break;
    case _12_47_PM:
        printf("Closest departure time is 12:47 p.m., arriving at  3:00 p.m.\n");
        break;
    case _2_00_PM:
        printf("Closest departure time is  2:00 p.m., arriving at  4:08 p.m.\n");
        break;
    case _3_45_PM:
        printf("Closest departure time is  3:45 p.m., arriving at  5:55 p.m.\n");
        break;
    case _7_00_PM:
        printf("Closest departure time is  7:00 p.m., arriving at  9:20 p.m.\n");
        break;
    case _9_45_PM:
        printf("Closest departure time is  9:45 p.m., arriving at 11:58 p.m.\n");
        break;
    default:
        break;
    }

    return 0;
}


void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if(desired_time < (_8_00_AM + _9_43_AM) / 2)
    {
        *departure_time = _8_00_AM;
        *arrival_time = _10_16_AM;
    }
    else if(desired_time < (_9_43_AM + _11_19_AM) / 2)
    {
        *departure_time = _9_43_AM;
        *arrival_time = _11_52_AM;
    } 
    else if(desired_time < (_11_19_AM + _12_47_PM) / 2)
    {
        *departure_time = _11_19_AM;
        *arrival_time = _1_31_PM;
    }
    else if(desired_time < (_12_47_PM + _2_00_PM) / 2)
    {
        *departure_time = _12_47_PM;
        *arrival_time = _3_00_PM;
    } 
    else if(desired_time < (_2_00_PM + _3_45_PM) / 2)
    {
        *departure_time = _2_00_PM;
        *arrival_time = _4_08_PM;
    }
    else if(desired_time < (_3_45_PM + _7_00_PM) / 2)
    {
        *departure_time = _3_45_PM;
        *arrival_time = _5_55_PM;
    }
    else if(desired_time < (_7_00_PM + _9_45_PM) / 2)
    {
        *departure_time = _7_00_PM;
        *arrival_time = _9_20_PM;
    }
    else
    {
        *departure_time = _9_45_PM;
        *arrival_time = _11_58_PM;
    }
}



