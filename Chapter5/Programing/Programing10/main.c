/*
 *Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grade;
    int level;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if(grade > 100 || grade < 0)
    {
        printf("Invalid grade\n");
        exit(EXIT_FAILURE);
    }


    level = grade / 10;
    switch (level)
    {
    case 9:
    case 10:
        printf("Letter grade: A\n");
        break;
    case 8:
        printf("Letter grade: B\n");
        break;
    case 7:
        printf("Letter grade: C\n");
        break;
    case 6:
        printf("Letter grade: D\n");
        break;
    default:
        printf("Letter grade: F\n");
        break;
    }

    return 0;
}

