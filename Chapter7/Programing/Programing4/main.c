//Copyright (c) 2022 user1687569
#include <stdio.h>

void charConvert(char ch);

int main()
{
    char phoneNum[20] = {0};
    char ch;
    int count = 0;

    printf("Enter phone number: ");
    while ((ch = getchar()) != '\n')
    {
        phoneNum[count] = ch;
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        if(phoneNum[i] >= 'A' && phoneNum[i] <= 'Z')
            charConvert(phoneNum[i]);
        else
            printf("%c", phoneNum[i]);
    }
    printf("\n");

    return 0;
}


void charConvert(char ch)
{
    switch (ch)
    {
    case 'A':
    case 'B':
    case 'C':
        printf("2");
        break;
    case 'D':
    case 'E':
    case 'F':
        printf("3");
        break;
    case 'G':
    case 'H':
    case 'I':
        printf("4");
        break;
    case 'J':
    case 'K':
    case 'L':
        printf("5");
        break;
    case 'M':
    case 'N':
    case 'O':
        printf("6");
        break;
    case 'P':
    case 'R':
    case 'S':
        printf("7");
        break;
    case 'T':
    case 'U':
    case 'V':
        printf("8");
        break;
    case 'W':
    case 'X':
    case 'Y':
        printf("9");
        break;
    default:
        break;
    }
}

