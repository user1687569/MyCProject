//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{   
    float speed;

    while (1)
    {
        printf("Please input the speed of wind: ");
        if(!scanf("%f", &speed))
            break;

        if(speed < 1.0f)
            printf("Calm\n");
        else if(speed >= 1.0f && speed <= 3.0f)
            printf("Light air\n");
        else if(speed >= 4.0f && speed <= 27.0f)
            printf("Breeze\n");
        else if(speed >= 28.0f && speed <= 47.0f)
            printf("Gale\n");
        else if(speed >= 48.0f && speed <= 63.0f)
            printf("Storm\n");
        else if(speed > 63.0f)
            printf("Hurricane\n");
    }
    
    return 0;
}


