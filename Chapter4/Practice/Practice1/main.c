//Copyright (c) 2022 user1687569
#include <stdio.h>

void func1_a();
void func1_b();
void func1_c();
void func1_d();
void func2();
void func3();

int main()
{
    // func1_a();      //1 2
    // func1_b();      //0
    // func1_c();      //1
    // func1_d();      //0

    // func2();        //总是一样

    func3();

    return 0;
}


void func1_a()
{
    int i = 5, j = 3;
    printf("%d %d\n", i / j, i % j);    //1 2
}


void func1_b()
{
    int i = 2, j = 3;
    printf("%d\n", (i + 10) % j);       // 0
}


void func1_c()
{
    int i = 7, j = 8, k = 9;
    printf("%d\n", (i + 10) % k / j);   // 1
}


void func1_d()
{
    int i = 1, j = 2, k = 3;
    printf("%d\n", (i + 5) % (j + 2) / k);  //0
}


void func2()
{//总是一样
    int i, j;
    i = 108;
    j = 5;

    printf("(-i) / j = %d\n", (-i) / j);
    printf("-(i / j) = %d\n", -(i / j));
}


void func3()
{
    printf("8 / 5 = %d\n", 8 / 5);          //1
    printf("-8 / 5 = %d\n", -8 / 5);        //-1
    printf("8 / -5 = %d\n", 8 / -5);        //-1
    printf("-8 / -5 = %d\n", -8 / -5);      //1
}





