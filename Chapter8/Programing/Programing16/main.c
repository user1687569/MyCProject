//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int alphaFrequency[26]  = {0};
    int count1 = 0;
    int count2 = 0;
    char firstWord[20] = {0};
    char secondWord[20] = {0};
    char ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n')
    {
        firstWord[count1++] = ch;
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
    {
        secondWord[count2++] = ch;
    }
    
    for (int i = 0; i < count1; i++)
    {
        if(isalnum(firstWord[i]))
            alphaFrequency[tolower(firstWord[i]) - 'a']++;
    }
    
    for (int i = 0; i < count2; i++)
    {
        if(isalnum(secondWord[i]))
            alphaFrequency[tolower(secondWord[i]) - 'a']--;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(alphaFrequency[i] != 0)
        {
            printf("The words are not anagrams.\n");
            exit(EXIT_FAILURE);
        }
    }

    printf("The words are anagrams.\n");
    exit(EXIT_SUCCESS);
}

