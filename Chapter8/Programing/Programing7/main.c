/*
 *Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <ctype.h>

int main()
{
    int array[5][5] = {{0}};
    int rowTotals[5] = {0};
    int colTotals[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &array[i][j]);
            rowTotals[i] += array[i][j];
        }
    }
    
    printf("Row Totals: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%3d", rowTotals[i]);
    }
    printf("\n");
    
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            colTotals[i] += array[j][i]; 
        }
    }

    printf("Column Totals: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%3d", colTotals[i]);
    }

    return 0;
}



