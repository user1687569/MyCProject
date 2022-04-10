/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

int a;

void f(int b)
{
    int c;
}

void g(void)
{
    int d;

    {
        int e;
    }
}


int main()
{
    int f;
    return 0;
}

// 列出在下面每种作用域内的所有变量的名字和形式参数的名字.
// a. f函数
// ==>  a, b, c
// b. g函数
// ==>  a, e
// c. 声明e的程序块
// ==>  a, d, e
// d. main函数
// ==>  a, f


