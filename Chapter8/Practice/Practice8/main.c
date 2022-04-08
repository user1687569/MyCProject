/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <time.h>

void func8();
void func9();

int main()
{
    // func8();
    func9();
    return 0;
}


void func8()
{
    double temperature_readings[30][24];

    srand((unsigned) time(NULL));

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            temperature_readings[i][j] = 35.0 + ((rand() % 250) / 100.0f);
        }
    }
    
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            printf("%7.2f", temperature_readings[i][j]);
        }
        printf("\n");
    }
}   


void func9()
{
    double temperature_readings[30][24];
    double sum = 0;
    // double average = 0;

    srand((unsigned) time(NULL));

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            temperature_readings[i][j] = 35.0 + ((rand() % 250) / 100.0f);
        }
    }
    
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            printf("%7.2f", temperature_readings[i][j]);
            sum += temperature_readings[i][j];
        }
        printf("\n");
    }

    printf("\n\nAverage temperature is: %7.2f\n", sum / 30 / 24);
}   

