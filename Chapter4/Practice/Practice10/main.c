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
    int i = 6, j;
    j = i += i;
    printf("%d %d\n", i, j);        /* 12 12 */ 
}


void func1_b()
{
    int i = 5, j;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j );       /* 3 4 */
}


void func1_c()
{
    int i = 7, j;
    j = 6 + (i = 2.5);
    printf("%d %d\n", i, j);        /* 2 8 */
}


void func1_d()
{
    int i, j;
    i = 2;
    j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j);        /* 6 9 */
}

