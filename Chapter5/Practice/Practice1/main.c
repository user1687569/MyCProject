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
    int i = 2, j = 3, k;
    k = i * j == 6;
    printf("%d\n", k);              /* 1 */
}


void func1_b()
{
    int i = 5, j = 10, k = 1;
    printf("%d\n", k > i < j);      /* 1 */ 
}


void func1_c()
{
    int i = 3, j = 2, k = 1;
    printf("%d\n", i < j == j < k); /* 1 */
}


void func1_d()
{
    int i = 3, j = 4, k = 5;
    /*
     * (i % j) + i < k  
     * ((i % j) + i) < k
     */
    printf("%d\n", i % j + i < k);  /* 0 */
}

