//Copyright (c) 2022 user1687569
#include <stdio.h>

char charConvert(char ch);

int main()
{
    char phoneNum[20] = {0};
    char phoneConverted[20] = {0};
    char ch;
    int count = 0;

    printf("Enter phone number: ");
    while ((ch = getchar()) != '\n')
    {
        phoneNum[count] = ch;
        count++;
    }
    phoneNum[count] = '\0';

    for (int i = 0; i < count; i++)
    {
        if(phoneNum[i] >= 'A' && phoneNum[i] <= 'Z')
        {
            phoneConverted[i] = charConvert(phoneNum[i]);
        }
        else
        {
            phoneConverted[i] = phoneNum[i];
            // printf("%c", phoneNum[i]);
        }
    }
    printf("\n");

    printf("Phone number string:    %s\n", phoneNum);
    printf("Phone number converted: %s\n", phoneConverted);

    return 0;
}


char charConvert(char ch)
{
    char ret = '2';
    switch (ch)
    {
    case 'A':
    case 'B':
    case 'C':
        // printf("2");
        ret = '2';
        break;
    case 'D':
    case 'E':
    case 'F':
        // printf("3");
        ret = '3';
        break;
    case 'G':
    case 'H':
    case 'I':
        // printf("4");
        ret = '4';
        break;
    case 'J':
    case 'K':
    case 'L':
        // printf("5");
        ret = '5';
        break;
    case 'M':
    case 'N':
    case 'O':
        // printf("6");
        ret = '6';
        break;
    case 'P':
    case 'R':
    case 'S':
        // printf("7");
        ret = '7';
        break;
    case 'T':
    case 'U':
    case 'V':
        // printf("8");
        ret = '8';
        break;
    case 'W':
    case 'X':
    case 'Y':
        // printf("9");
        ret = '9';
        break;
    default:
        break;
    }

    return ret;
}


