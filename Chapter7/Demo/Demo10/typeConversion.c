//Copyright (c) 2022 user1687569
#include <stdio.h>

void conversion1();
void conversion2();

int main()
{
    conversion1();
    conversion2();

    return 0;
}


void conversion1()
{
    unsigned int uNum = 10;
    int num = -12;

    num = uNum + num;
    printf("num = %d\n", num);
}


void conversion2()
{
    unsigned int uNum = 10;
    int num = -12;

    uNum = uNum + num;
    printf("uNum = %d\n", uNum);
}
