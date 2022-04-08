//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    char sentences[50] = {0};
    int count = 0;
    char terminateChar;

    printf("Enter a sentences: ");
    ch = getchar();
    while (ch != '.' && ch != '?' && ch != '!')
    {
        sentences[count] = ch;
        count++;
        ch = getchar();
    }
    terminateChar = ch;
    printf("Original Sentence string: %s%c\n", sentences, terminateChar);
    printf("count = %d\n", count);
    
    char *pStart = sentences;
    char *pEnd = sentences + count;
    char *p = pEnd;
    char *pTemp;

    while (p >= pStart)
    {
        if(*p == ' ')
        {
            pTemp = p + 1;
            while (pTemp < pEnd)
            {
                printf("%c", *pTemp++);
            }
            printf(" ");
            pEnd = p;
        }
        else if (p == pStart)
        {
            pTemp = p;
            while (pTemp < pEnd)
            {
                printf("%c", *pTemp++);
            }
        }
        p--;
    }

    printf("%c\n", terminateChar);
    
    return 0;
}

