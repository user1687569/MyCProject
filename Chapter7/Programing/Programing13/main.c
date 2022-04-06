//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char ch;
    unsigned int wordCount = 0;
    unsigned int wordLength = 0;
    float wordSum = 0.0f;
    float average = 0.0f;

    printf("Enter an expression: ");
    while ((ch = getchar()) != '\n')
    {
        if(ch == ' ')
        {
            if(wordLength != 0)
            {
                wordSum += wordLength;
                wordCount++;
                wordLength = 0;
            }
        }
        else
        {
            wordLength++;
            printf("ch = %c, wordLength = %d\n", ch, wordLength);
        }
    }

    wordSum += wordLength;
    wordCount++;

    printf("wordSum = %.2f, wordCount = %d\n", wordSum, wordCount);
    average = wordSum / wordCount;
    printf("Average word length: %.2f\n", average);

    return 0;
}

