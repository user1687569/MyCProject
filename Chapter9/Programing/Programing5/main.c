//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int  n, int magic_square[n][n]);


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

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);
    int square[size][size];

    create_magic_square(size, square);
    print_magic_square(size, square);

    return 0;
}


void create_magic_square(int n, int magic_square[n][n])
{
    int currentX;
    int currentY;
    int nextX;
    int nextY;

    printf("Assign zero to array.\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            magic_square[i][j] = 0;
        }
    }

    currentX = n / 2;
    currentY = 0;
    magic_square[currentY][currentX] = 1;
    for (int i = 2; i <= n * n; i++)
    {
        nextY = currentY - 1;
        nextY = nextY < 0 ? nextY + n : nextY;
        nextX = currentX + 1;
        nextX = nextX > n - 1 ? nextX % n : nextX;

        if(magic_square[nextY][nextX] == 0)
        {
            magic_square[nextY][nextX] = i;
        }
        else
        {
            nextY = currentY + 1;
            nextY = nextY > n - 1 ? nextY % n : nextY;
            nextX = currentX;
            magic_square[nextY][nextX] = i;
        }

        currentY = nextY;
        currentX = nextX;
    }
}


void print_magic_square(int  n, int magic_square[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", magic_square[i][j]);
        }
        printf("\n");
    }
}


