//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    char word[50] = {0};
    int count = 0;
    int vowelCount = 0;

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
    {
        word[count] = ch;
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        if(word[i] == 'a' || word[i] == 'A' ||
           word[i] == 'e' || word[i] == 'E' ||
           word[i] == 'i' || word[i] == 'I' ||
           word[i] == 'o' || word[i] == 'O' ||
           word[i] == 'u' || word[i] == 'U')
           vowelCount++;
    }
    
    printf("Your sentence contains %d vowels\n", vowelCount);
    return 0;
}



