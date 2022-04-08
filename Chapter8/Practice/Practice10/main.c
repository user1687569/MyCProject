/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <time.h>

void func10();
void func11();


int main()
{
    // func10();
    func11();
    return 0;
}


void func10()
{
    char chess_board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%3c", chess_board[i][j]);
        }
        printf("\n");
    }
}   


void func11()
{
    char chess_board[8][8] = {0};

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if((i + j) % 2)
                chess_board[i][j] = 'R';
            else
                chess_board[i][j] = 'B';
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%3c", chess_board[i][j]);
        }
        printf("\n");
    }
}  


