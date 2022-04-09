/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int evaludate_position(char board[8][8]);

int main()
{
    char elements[] = {'K', 'Q', 'R', 'B', 'N', 'P',
                       'k', 'q', 'r', 'b', 'n', 'p'};
    char chessBoard[8][8] = {{0}};
    int diff;

    srand((unsigned) time(NULL));
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            chessBoard[i][j] = elements[rand() % 12];
        }
    }
    
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            // chessBoard[i][j] = elements[rand() % 12];
            printf("%3c", chessBoard[i][j]);
        }
        printf("\n");
    }

    diff = evaludate_position(chessBoard);
    if(diff > 0)
        printf("The white side has the advantage!\n");
    else if(diff < 0)
        printf("The black side has the advantage!\n");
    else 
        printf("Balance on both sides!\n");

    return 0;
}


int evaludate_position(char board[8][8])
{
    int whiteValue = 0;
    int blackValue = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch (board[i][j])
            {
            case 'K':   whiteValue += 10;   break;
            case 'Q':   whiteValue += 9;    break;
            case 'R':   whiteValue += 5;    break;
            case 'B':   whiteValue += 3;    break;
            case 'N':   whiteValue += 3;    break;
            case 'P':   whiteValue += 1;    break;
            case 'k':   blackValue += 10;   break;
            case 'q':   blackValue += 9;    break;
            case 'r':   blackValue += 5;    break;
            case 'b':   blackValue += 3;    break;
            case 'n':   blackValue += 3;    break;
            case 'p':   blackValue += 1;    break;
            default:                        break;
            }
        }
    }
    
    return whiteValue - blackValue;
}

