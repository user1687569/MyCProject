//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <limits.h>

void func1();
void func11();
void func111();

/*
 * 计算机上用于存储整数类型的位数是32位
 */

int main()
{
    // func1();    
    // func11();
    func111();
    
    return 0;
}


void func1()
{   
    /*
     * 46340          2147395600
     * 46341         -2147479015
     * 导致失败的n的最小值为 46341
     */
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
 
    for(i = 46000; i <= n; i++)
        printf("%20d%20d\n", i, i * i);
}


void func11()
{   
    /*
     * 181               32761
     * 182              -32412
     * 导致失败的n的最小值为 182
     */
    short i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%hd", &n);
 
    for(i = 1; i <= n; i++)
        printf("%20hd%20hd\n", i, i * i);
}


void func111()
{   
    /*
     * 46340          2147395600
     * 46341         -2147479015
     * 导致失败的n的最小值为 46341
     */
    long int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);
 
    for(i = 46000; i <= n; i++)
        printf("%20ld%20ld\n", i, i * i);
}

