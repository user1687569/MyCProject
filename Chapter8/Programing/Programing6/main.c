//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>

#define BUF_SIZE    100

void B1FF_Convert(char ch);

int main()
{
    char string[BUF_SIZE] = {0};
    char ch;
    int count = 0;

    printf("Enter message: ");
    while ((ch = getchar()) != '\n')
    {
        string[count] = ch;
        count++;
    }

    printf("In B1FF-speak: ");
    for (int i = 0; i < count; i++)
    {
        B1FF_Convert(string[i]);
    }

    printf("!!!!!!!!!!\n");
    return 0;
}


void B1FF_Convert(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'A':
        printf("4");
        break;
    case 'b':
    case 'B':
        printf("8");
        break;
    case 'e':
    case 'E':
        printf("3");
        break;
    case 'i':
    case 'I':
        printf("1");
        break;
    case 'o':
    case 'O':
        printf("0");
        break;
    case 's':
    case 'S':
        printf("5");
        break;
    default:
        if(isalpha(ch))
            printf("%c", toupper(ch));
        else
            printf("%c", ch);
        break;
    }
}

