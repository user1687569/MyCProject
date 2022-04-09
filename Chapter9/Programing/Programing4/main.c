//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(char counts[26]);
bool equal_array(char counts1[26], char counts2[26]);

int main()
{
    bool flag = false;
    char firstWord[26] = {0};
    char secondWord[26] = {0};

    printf("Enter first word: ");
    read_word(firstWord);

    printf("Enter second word: ");
    read_word(secondWord);
    
    flag = equal_array(firstWord, secondWord);
    if(flag == true)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    exit(EXIT_SUCCESS);
}


void read_word(char counts[26])
{
    char ch;
    int nCount = 0;

    while ((ch = getchar()) != '\n')
    {
        counts[nCount++] = ch;
    }
}


bool equal_array(char counts1[26], char counts2[26])
{
    int alphaFrequency[26]  = {0};
    char *p = counts1;

    while (*p != '\0')
    {
        if(isalnum(*p))
        alphaFrequency[tolower(*p) - 'a']++;
        p++;
    }

    p = counts2;
    while (*p != '\0')
    {
        if(isalnum(*p))
        alphaFrequency[tolower(*p) - 'a']--;
        p++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(alphaFrequency[i] != 0)
        {
            return false;
        }
    }

    return true;
}

