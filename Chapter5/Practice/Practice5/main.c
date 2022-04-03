/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

void func5();
void func6();
void func7();
void func7_1();

int main()
{
    func5();
    func6();
    func7();
    func7_1();
    return 0;
}


void func5()
{
    int n = 0;

    if(n >= 1 <= 10)
        printf("n is between 1 and 10\n");
}


void func6()
{
    int n = 5;
    if(n == 1 - 10)
        printf("n is between 1 and 10\n");
}


void func7()
{
    int i = 17;
    printf("%d\n", i >= 0 ? i : -i);
}


void func7_1()
{
    int i = -17;
    printf("%d\n", i >= 0 ? i : -i);
}


void func8()
{
    _Bool teenager;
    int age;

    printf("Please enter age: ");
    scanf("%d", &age);

    if(age >= 13 && age <= 19)
        teenager = true;
    else
        teenager = false;
}
