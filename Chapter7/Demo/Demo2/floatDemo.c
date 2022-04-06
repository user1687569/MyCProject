//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{
    unsigned int uInt;

    printf("Enter an unsigned integer(Decimal): ");
    scanf("%u", &uInt);
    printf("u = %o\n", uInt);
    printf("u = %d\n", uInt);
    printf("u = %x\n", uInt);

    printf("Enter an unsigned integer(October): ");
    scanf("%o", &uInt);
    printf("u = %o\n", uInt);
    printf("u = %d\n", uInt);
    printf("u = %x\n", uInt);

    printf("Enter an unsigned integer(Hex): ");
    scanf("%x", &uInt);
    printf("u = %o\n", uInt);
    printf("u = %d\n", uInt);
    printf("u = %x\n", uInt);

    char ch;
    getchar();
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("%c", ch);
    
    return 0;
}

