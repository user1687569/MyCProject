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


int main(void)
{
    int flag;
    int hour, minute;
    int totalMinute;
    char amOrPm[3];
    char ch;

    printf("Enter a 12-hour time(hh:mm AM/PM): ");
    scanf("%d:%d", &hour, &minute);

    while ((ch = getchar()) == ' ')
        ;
    amOrPm[0] = ch;

    while ((ch = getchar()) == ' ')
        ;
    amOrPm[1] = ch;
    amOrPm[2] = '\0';

    // printf("%d\n", hour);
    // printf("%d\n", minute);
    // printf("%c\n", amOrPm[0]);
    // printf("%c\n", amOrPm[1]);
    
    switch (amOrPm[0])
    {
    case 'a':
    case 'A':
        totalMinute = hour * 60 + minute;
        break;
    case 'p':
    case 'P':
        totalMinute = (hour + 12) * 60 + minute;
        break;
    default:
        break;
    }

    // totalMinute = hour * 60 + minute;

    if(totalMinute < (_8_00_AM + _9_43_AM) / 2)
        flag = _8_00_AM;
    else if(totalMinute < (_9_43_AM + _11_19_AM) / 2)
        flag = _9_43_AM;
    else if(totalMinute < (_11_19_AM + _12_47_PM) / 2)
        flag = _11_19_AM;
    else if(totalMinute < (_12_47_PM + _2_00_PM) / 2)
        flag = _12_47_PM;
    else if(totalMinute < (_2_00_PM + _3_45_PM) / 2)
        flag = _2_00_PM;
    else if(totalMinute < (_7_00_PM + _9_45_PM) / 2)
        flag = _7_00_PM;
    else
        flag = _9_45_PM;
    
    switch (flag)
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