//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = 'a';

    ch = toupper(ch);
    printf("After toupper, ch = %c\n", ch);

    ch = tolower(ch);
    printf("After tolower, ch = %c\n", ch);

    ch += 1;
    printf("After plus 1, ch = %c\n", ch);

    return 0;
}





