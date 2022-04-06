/*
 *Copyright (c) 2022 user1687569
 */
#include <stdio.h>

int main(void)
{
    int hour, minute;
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
    
    switch (amOrPm[0])
    {
    case 'a':
    case 'A':
        printf("Equivalent 24-hour time: %2d:%2d", hour, minute);
        break;
    case 'p':
    case 'P':
        if(hour == 12)
            printf("Equivalent 24-hour time: %2d:%2d", hour, minute);
        else 
            printf("Equivalent 24-hour time: %2d:%2d", hour+12, minute);
        break;
    default:
        break;
    }
    
    return 0;
}