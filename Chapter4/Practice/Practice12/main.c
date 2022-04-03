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
    int i = 1;
    printf("%d ", i++ - 1);        /* 0 2 */
    printf("%d\n", i);
}


void func1_b()
{
    int i = 10, j = 5;
    printf("%d ", i++ - ++j);       
    printf("%d %d\n", i, j);        /* 4 11 6 */
}


void func1_c()
{
    int i = 7, j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j);        /* 0 8 7 */
}


void func1_d()
{
    int i = 3, j = 4, k = 5;
    printf("%d ", i++ - j++ + --k);        
    printf("%d %d %d\n", i, j, k);  /* 3 4 5 4 */
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





