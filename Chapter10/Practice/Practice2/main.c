/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

int b, c;

void f(void)
{
    int b, d;
}

void g(int a)
{
    int c;
    {
        int a, d;
    }
}

int main()
{
    int c, d;
    return 0;
}

// 列出在下面每种作用域内的所有变量的名字和形式参数的名字.
// a. f函数
// ==>  b(inside f函数), c, d
// b. g函数
// ==>  b, c(inside g函数)
// c. 声明a和d的程序块
// ==>  a, b, c(inside g函数), d
// d. main函数
// ==>  b, c(inside main函数), d


