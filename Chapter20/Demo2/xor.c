//Copyright (c) 2022 user1687569
#include <stdio.h> 
#include <ctype.h>

#define KEY '&'

int main()
{
    int orig_char, new_char;

    while ((orig_char = getchar()) != EOF)
    {
        new_char = orig_char ^ KEY;
        if(isprint(orig_char) && isprint(new_char))
            putchar(new_char);
        else
            putchar(orig_char);
    }

    return 0;
}


struct file_date
{
    unsigned int day: 5;
    unsigned int month: 4;
    unsigned int year: 7;
};






