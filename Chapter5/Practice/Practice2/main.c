/*
 * Copyright (c) 2022 user1687569
 */
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
    int i = 10, j = 5;
    printf("%d\n", !i < j);         /* 1 */
}


void func1_b()
{
    int i = 2, j = 1;
    printf("%d\n", !!i + !j);       /* 1 */ 
}


void func1_c()
{
    int i = 5, j = 0, k = -5;
    printf("%d\n", i && j || k);    /* 1 */
}


void func1_d()
{
    int i = 1, j = 2, k = 3;
    printf("%d\n", i < j || k);     /* 1 */
}


