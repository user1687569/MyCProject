//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{
    int a, b, c;

    a = 5;
    c = (b = a + 2) - (a = 1);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    int i, j;
    i = 2;
    j = i * i++;
    printf("i = %d\n", i);
    printf("j = %d\n", j);

    return 0;
}


// a = 1
// b = 7
// c = 6

