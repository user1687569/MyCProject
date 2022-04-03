/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

//两个函数等价
void func9_1(int score);
void func9_2(int score);

int main()
{
    int score;

    printf("Please enter score: ");
    scanf("%d", &score);

    func9_1(score);
    func9_2(score);

    return 0;
}


void func9_1(int score)
{
    printf("func9_1: ");
    if(score >= 90)
        printf("A");
    else if(score >= 80)
        printf("B");
    else if(score >= 70)
        printf("C");
    else if(score >= 60)
        printf("D");
    else
        printf("F");
    
    printf("\n");
}


void func9_2(int score)
{
    printf("func9_2: ");
    if(score < 60)
        printf("F");
    else if(score < 70)
        printf("D");
    else if(score < 80)
        printf("C");
    else if(score < 90)
        printf("B");
    else
        printf("A");
    
    printf("\n");
}
