/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>

void f(double x);   /* OK */
// void f(double);     /* OK */
// void f(x);          /* OK */
// f(double x);        /* Ok */            

int main()
{
    f(2.5);
    return 0;
}


void f(double x)
{
    printf("value is %lf\n", x);
}