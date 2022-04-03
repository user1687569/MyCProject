//Copyright (c) 2022 user1687569
#include <stdio.h>

void func1_a();
void func1_b();
void func1_c();
void func1_d();

int main()
{
    func1_a();     
    func1_b();    
    func1_c();   
    func1_d();

    return 0;
}


void func1_a()
{
    int i = 7, j = 8;
    i *= j + 1; 
    printf("%d %d\n", i, j);    /* 63 8 */
}


void func1_b()
{
    int i, j, k;
    i = j = k = 1;
    i += j += k;
    printf("%d %d %d\n", i, j, k);      /* 3 2 1 */
}


void func1_c()
{
    int i, j, k;
    i = 1;
    j = 2;
    k = 3;
    i -= j -= k;
    printf("%d %d %d\n", i, j, k);      /* 2 -1 3 */
}


void func1_d()
{
    int i, j, k;
    i = 2;
    j = 1;
    k = 0;
    i *= j *= k;
    printf("%d %d %d\n", i, j, k);      /* 0 0 0 */
}

