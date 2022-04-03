/*
 *Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;
    int flag = 0;
    int level;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    printf("You entered the number ");

    switch (number / 10)
    {
    case 1:
        flag = 1;
        break;
    case 2:
        printf("twenty");
        break;
    case 3:
        printf("tirty");
        break;
    case 4:
        printf("forty");
        break;
    case 5:
        printf("fifty");
        break;
    case 6:
        printf("sixty");
        break;
    case 7:
        printf("seventy");
        break;
    case 8:
        printf("eighty");
        break;
    case 9:
        printf("ninety");
        break;
    default:
        break;
    }

    switch (number % 10)
    {
    case 0:
        if (flag == 1)
            printf("ten.\n");
        else
            printf(".\n");
        break;
    case 1:
        if(flag == 1)
            printf("eleven.\n");
        else
            printf("-one.\n");
        break;
    case 2:
        if(flag == 1)
            printf("twelve.\n");
        else
            printf("-two.\n");
        break;
    case 3:
        if(flag == 1)
            printf("thirteen.\n");
        else
            printf("-three.\n");
        break;
    case 4:
        if(flag == 1)
            printf("fourteen.\n");
        else
            printf("-four.\n");
        break;
    case 5:
        if(flag == 1)
            printf("fifteen.\n");
        else
            printf("-five.\n");
        break;
    case 6:
        if(flag == 1)
            printf("sixteen.\n");
        else
            printf("-six.\n");
        break;
    case 7:
        if(flag == 1)
            printf("seventeen.\n");
        else
            printf("-seven.\n");
        break;
    case 8:
        if(flag == 1)
            printf("eighteen.\n");
        else
            printf("-eight.\n");
        break;
    case 9:
        if(flag == 1)
            printf("nineteen.\n");
        else
            printf("-nine.\n");
        break;
    default:
        break;
    }

    return 0;
}

