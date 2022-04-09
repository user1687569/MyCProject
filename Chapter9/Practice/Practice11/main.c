/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n);

int main()
{
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'A', 'A', 'C'};
    float average;

    average = compute_GPA(grades, 8);
    printf("Average of GPA is: %.2f\n", average);

    return 0;
}


float compute_GPA(char grades[], int n)
{
    float sum = 0.0f;
    for (int i = 0; i < n; i++)
    {
        switch (toupper(grades[i]))
        {
        case 'A':
            sum += 4;
            break;
        case 'B':
            sum += 3;
            break;
        case 'C':
            sum += 2;
            break;
        case 'D':
            sum += 1;
            break;
        case 'E':
            sum += 0;
            break;
        default:
            break;
        }
    }

    return sum / n;
}

