//Copyright (c) 2022 user1687569
#include <stdio.h> 


int main()
{
    unsigned short i, j;

    i = 13;
    j = i << 2;
    printf("i << 2 = %d\n", j);
    
    j = i >> 2;
    printf("i >> 2 = %d\n\n", j);

//-------------------------------------
//-------------------------------------
    unsigned short x, y, k;
    x = 21;
    y = 56;
    
    k = ~x;
    printf("~x = %d\n", k);

    k = x & y;
    printf("x & y = %d\n", k);

    k = x ^ y;
    printf("x & y = %d\n", k);

    k = x | y;
    printf("x & y = %d\n", k);

    return 0;
}





