//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{   
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The reversal is: ");
    do
    {
        printf("%d", number % 10);
        number /= 10;
    } while (number > 0);

    printf("\n");

    return 0;
}



