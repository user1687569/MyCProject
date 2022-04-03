//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{   
    int number;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);
    
    printf("In octal, your number is: %o\n", number);
    printf("In octal, your number is: %#o\n", number);
    printf("In hex, your number is: %x\n", number);
    printf("In hex, your number is: %#x\n", number);
    return 0;
}


