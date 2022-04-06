//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>

int charToIntValue(char ch);

int main()
{
    char word[20] = {0};
    char ch;
    int count = 0;
    int value = 0;

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
    {
        word[count] = ch;
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        value += charToIntValue(toupper(word[i]));
    }
    
    printf("Scrabble value: %d\n", value);
    return 0;
}


int charToIntValue(char ch)
{
    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
        return 1;
        break;
    case 'D':
    case 'G':
        return 2;
        break;
    case 'B':
    case 'C':
    case 'M':
    case 'P':
        return 3;
        break;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
        return 4;
        break;
    case 'K':
        return 5;
        break;
    case 'J':
    case 'X':
        return 8;
        break;
    case 'Q':
    case 'Z':
        return 10;
        break;
    default:
    return 0;
        break;
    }
}

