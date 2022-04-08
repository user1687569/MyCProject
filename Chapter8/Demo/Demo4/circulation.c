//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdbool.h>

// #define N 10
#define N 5

int main()
{
    double ident[N][N];
    int row, col;

    for(row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if(row == col)
                ident[row][col] = 1.0;
            else
                ident[row][col] = 0.0;

    for(row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
            printf("%5.2f", ident[row][col]);
        
        printf("\n");
    }
    
    return 0;
}



