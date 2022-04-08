/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

void func1();
void func2();
void func3();
void func4();
void func5();

int main()
{
    // func1();
    // func2();
    // func3();
    // func4();
    func5();
    return 0;
}


void func1()
{
    int array[6];

    /*
     * sizeof(a) / sizeof(t)的问题是，读取程序的人很难检查它的正确性。 
     * (读取器必须找到a的声明，并确保它的元素类型为t。)  
     */
    printf("count = %d\n", sizeof(array) / sizeof(array[0])); 
    printf("count = %d\n", sizeof(array) / sizeof(int)); 
}


void func2()
{
    int nList[10] = {0};
    char ch;

    printf("Enter a number: ");
    ch = getchar();

    nList[ch - '0'] = ch - '0';

    for(int i = 0; i < 10; i++)
        printf("%d ", nList[i]);
    
    printf("\n");
}


void func3()
{
    bool weekend[7] = {true, false, false, false, false, false, true};
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", weekend[i]);
    }
    printf("\n");
}


void func4()
{
    bool weekend[7] = {[0] = true, [6] = true};
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", weekend[i]);
    }
    printf("\n");
}


void func5()
{
    int fib_number[40] = {0, 1};

    for (int i = 2; i < 40; i++)
    {
        fib_number[i] = fib_number[i - 2] + fib_number[i - 1];
    }

    for (int i = 0; i < 40; i++)
    {
        if(i % 5 == 0)
            printf("\n");
        printf("%10d", fib_number[i]);
    }
}


