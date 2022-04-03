//Copyright (c) 2022 user1687569
#include <stdio.h>

void func13_a();
void func13_b();
void func13_c();

// ++i 与 表达式 (i += 1)完全相同
int main()
{
    func13_a();     
    func13_b();    
    func13_c();

    return 0;
}


void func13_a()
{
    int i = 1;
    printf("++i = %d\n", ++i);
}


void func13_b()
{
    int i = 1;
    printf("i++ = %d\n", i++);
}


void func13_c()
{
    int i = 1;
    printf("i += 1, i = %d\n", i += 1);
}


