//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
    x1  x2  x3  x4  x5
y1
y2
y3
y4
y5
*/

int main()
{
    int size;
    int currentX;
    int currentY;
    int nextX;
    int nextY;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    int square[size][size];

    printf("Assign zero to array.\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            square[i][j] = 0;
        }
    }

    currentX = size / 2;
    currentY = 0;
    square[currentY][currentX] = 1;
    for (int i = 2; i <= size * size; i++)
    {
        nextY = currentY - 1;
        nextY = nextY < 0 ? nextY + size : nextY;
        nextX = currentX + 1;
        nextX = nextX > size - 1 ? nextX % size : nextX;

        if(square[nextY][nextX] == 0)
        {
            square[nextY][nextX] = i;
        }
        else
        {
            nextY = currentY + 1;
            nextY = nextY > size - 1 ? nextY % size : nextY;
            nextX = currentX;
            square[nextY][nextX] = i;
        }

        currentY = nextY;
        currentX = nextX;
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%3d", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}

