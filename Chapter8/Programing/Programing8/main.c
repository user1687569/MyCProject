/*
 *Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <ctype.h>

/*
            Test1   Test2   Test3   Test4   Test5
Student1
Student2
Student3
Student4
Student5
*/

int main()
{
    int array[5][5] = {{0}};
    int rowTotals[5] = {0};         /* 每个学生的总分 */
    float rowAverage[5] = {0};      /* 每个学生的平均分 */
    int colTotals[5] = {0};         /* 每门测验的总分 */
    float colAverage[5] = {0};      /* 每门测验的平均分 */
    int colMax[5] = {0};            /* 每门测验的最高分 */
    int colMin[5] = {0};            /* 每门测验的最低分 */    

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &array[i][j]);
            rowTotals[i] += array[i][j];
        }
        rowAverage[i] = (float) rowTotals[i] / 5;
    }
    
    // printf("Row Totals: ");
    printf("Each student total score: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%3d", rowTotals[i]);
    }
    printf("\n");

    printf("Each student average score: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%5.2f", rowAverage[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        colMax[i] = array[0][i];
        colMin[i] = array[0][i];
        for (int j = 0; j < 5; j++)
        {
            colTotals[i] += array[j][i];
            
            if(colMax[i] < array[j][i])
                colMax[i] = array[j][i];
            
            if(colMin[i] > array[j][i])
                colMin[i] = array[j][i];
        }
        colAverage[i] = (float) colTotals[i] / 5;
    }

    // printf("Column Totals: ");
    printf("Each Test average score: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%5.2f", colAverage[i]);
    }
    printf("\n");

    printf("Each Test Max score: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%3d", colMax[i]);
    }
    printf("\n");

    printf("Each Test Min score: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%3d", colMin[i]);
    }
    printf("\n");

    return 0;
}



