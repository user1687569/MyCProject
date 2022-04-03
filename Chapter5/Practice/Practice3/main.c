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
    int i = 3, j = 4, k = 5;
    printf("%d\n", i < j || ++j < k);       /* 1 */
    printf("%d %d %d\n", i, j, k);          /* 3 4 5 */
}


void func1_b()
{
    int i = 7, j = 8, k = 9;
    printf("%d\n", i - 7 && j++ < k);       /* 0 */ 
    printf("%d %d %d\n", i, j, k);          /* 7 8 9 */
}


void func1_c()
{
    int i = 7, j = 8, k = 9;
    printf("%d\n", (i = j) || (j = k));     /* 1 */ 
    printf("%d %d %d\n", i, j, k);          /* 8 8 9 */
}


void func1_d()
{
    int i = 7, j = 8, k = 9;
    printf("%d\n", ++i || ++j && ++k);      /* 1 */ 
    printf("%d %d %d\n", i, j, k);          /* 8 8 9 */
}



