//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{   
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if(hour >= 13)
        printf("Equivalent 12-hour time: %2d:%02d PM\n", hour-12, minute);
    else if(hour == 12)
        printf("Equivalent 12-hour time: %2d:%02d PM\n", hour, minute);
    else
        printf("Equivalent 12-hour time: %2d:%02d AM\n", hour, minute);

    return 0;
}



