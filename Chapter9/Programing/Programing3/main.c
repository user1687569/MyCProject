/*
 *Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAP_SIZE    10
#define BEGIN_CHAR  'A'
#define END_CHAR    'Z'

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main()
{
    char map[MAP_SIZE][MAP_SIZE];
    
    generate_random_walk(map);
    print_array(map);
    return 0;
}


void generate_random_walk(char walk[10][10])
{
    char curChar = BEGIN_CHAR;
    int curX = 0;
    int curY = 0;
    int newX = 0;
    int newY = 0;
    int direction = 0;
    int tryCount;
    bool newFlag = true;

    for (int i = 0; i < MAP_SIZE; i++)
    {
        for (int j = 0; j < MAP_SIZE; j++)
        {
            walk[i][j] = '.';
        }
    }

    srand((unsigned) time(NULL));
    walk[curX][curY] = curChar;
    curChar++;

/*
 * Direction
 *            3          
 *      2 <- [ ] -> 0
 *            1   
 */
    for (;;)
    {
        if(newFlag == true)
        {
            tryCount = 0;
            direction = rand() % 4;
            newFlag = false;
        }
        
        switch (direction)
        {
        case 0: newX = curX + 1; newY = curY;       break;
        case 1: newX = curX;     newY = curY + 1;   break;
        case 2: newX = curX - 1; newY = curY;       break;
        case 3: newX = curX;     newY = curY - 1;   break;
        default:                                    break;
        }

        if(newX >= 0 && newX < MAP_SIZE &&
           newY >= 0 && newY < MAP_SIZE &&
           walk[newX][newY] == '.')
        {
            if(curChar <= END_CHAR)
            {
                walk[newX][newY] = curChar;
                curX = newX;
                curY = newY;
                curChar += 1;
                newFlag = true;
            }
            else
            {
                break;
            }
        }
        else
        {
            if(tryCount == 4)
                break;
            direction = (direction + 1) % 4;
            tryCount++;
        }
    }
}


void print_array(char walk[10][10])
{
    for (int i = 0; i < MAP_SIZE; i++)
    {
        for (int j = 0; j < MAP_SIZE; j++)
        {
            printf("%3c", walk[i][j]);
        }
        printf("\n");
    }
}

