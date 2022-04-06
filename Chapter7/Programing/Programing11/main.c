//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    char firstName[20] = {0};
    char lastName[20] = {0};
    int firstNameCnt = 0;
    int lastNameCnt = 0;

    printf("Enter a first name and last name: ");
    while ((ch = getchar()) != ' ')
    {
        if(!isblank(ch))
        {
            firstName[firstNameCnt] = ch;
            firstNameCnt++;
        }
    }
    firstName[firstNameCnt] = '\0';

    while ((ch = getchar()) != '\n')
    {
        if(!isblank(ch))
        {
            lastName[lastNameCnt] = ch;
            lastNameCnt++;
        }
    }
    lastName[lastNameCnt] = '\0';

    printf("%s, %c.\n", lastName, firstName[0]);
    return 0;
}



