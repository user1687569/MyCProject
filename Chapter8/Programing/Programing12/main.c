//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>

int main()
{
    char word[20] = {0};
    char ch;
    int count = 0;
    int value = 0;
    int alphaValue[26] = {1, 3, 3, 2, 1, 4, 2,
                          4, 1, 8, 5, 1, 3, 1,
                          1, 3, 10,   1, 1, 1,
                          1, 4, 4,    8, 4, 10                      
    };

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
    {
        word[count] = ch;
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        value += alphaValue[toupper(word[i]) - 'A'];
    }
    
    printf("Scrabble value: %d\n", value);
    return 0;
}

