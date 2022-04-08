/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdbool.h>

void func6();
void func7();

int main()
{
    
    // func6();
    func7();
    return 0;
}


void func6()
{
    const int segments[10][7] = {
        {1, 1, 1, 1, 1, 1, 0},  /* 0 */
        {0, 1, 1, 0, 0, 0, 0},  /* 1 */
        {1, 1, 0, 1, 1, 0, 1},  /* 2 */
        {1, 1, 1, 1, 0, 0, 1},  /* 3 */
        {0, 1, 1, 0, 0, 1, 1},  /* 4 */
        {1, 0, 1, 1, 0, 1, 1},  /* 5 */
        {1, 0, 1, 1, 1, 1, 1},  /* 6 */
        {1, 1, 1, 0, 0, 0, 0},  /* 7 */
        {1, 1, 1, 1, 1, 1, 1},  /* 8 */
        {1, 1, 1, 0, 0, 1, 1}   /* 9 */
    };
}


void func7()
{
    const int segments1[10][7] = {
        {1, 1, 1, 1, 1, 1},     /* 0 */
        {0, 1, 1},              /* 1 */
        {1, 1, 0, 1, 1, 0, 1},  /* 2 */
        {1, 1, 1, 1, 0, 0, 1},  /* 3 */
        {0, 1, 1, 0, 0, 1, 1},  /* 4 */
        {1, 0, 1, 1, 0, 1, 1},  /* 5 */
        {1, 0, 1, 1, 1, 1, 1},  /* 6 */
        {1, 1, 1},              /* 7 */
        {1, 1, 1, 1, 1, 1, 1},  /* 8 */
        {1, 1, 1, 0, 0, 1, 1}   /* 9 */
    };

    const int segments[10][7] = {
        {1, 1, 1, 1, 1, 1},             /* 0 */
        {[1] = 1, [2] = 1},             /* 1 */
        {1, 1, 0, 1, 1, 0, 1},          /* 2 */
        {1, 1, 1, 1, [6] = 1},          /* 3 */
        {[1] = 1, 1, [5] = 1, [6] = 1}, /* 4 */
        {1, 0, 1, 1, 0, 1, 1},          /* 5 */
        {1, 0, 1, 1, 1, 1, 1},          /* 6 */
        {1, 1, 1},                      /* 7 */
        {1, 1, 1, 1, 1, 1, 1},          /* 8 */
        {1, 1, 1, [5] = 1, [6] = 1}     /* 9 */
    };

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%3d", segments[i][j]);
        }
        printf("\n");
    }
}

