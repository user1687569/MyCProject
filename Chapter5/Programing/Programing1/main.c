//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{   
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number > 99 && number < 1000)
        printf("The number %d has 3 digits\n", number);
    else if(number > 9)
        printf("The number %d has 2 digits\n", number);
    else
        printf("The number %d has 1 digit \n", number);

    return 0;
}



