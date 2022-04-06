//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <float.h>


int main()
{
    int a = 1;
    int b = 2;
    printf("%d\v%d\?\n", a, b);
    
    a++;
    b++;
    printf("%d\f%d\n", a, b);

    a++;
    b++;
    printf("%d\t%d\n", a, b);
    printf("%d\t\b%d\n", a, b);

    return 0;
}





