//Copyright (c) 2022 user1687569
#include <stdio.h>

// scanf() 成功读取数据时，返回值为1
// scanf() 未成功读取数据时，返回值为0

int main()
{   
    int i, n;
    int nArray[16];
    int rowSum1, rowSum2, rowSum3, rowSum4;
    int colSum1, colSum2, colSum3, colSum4;
    int diagonalSum1, diagonalSum2;

    printf("Enter the numbers from 1 to 16 in any order: \n");

    for(i = 0; i < 16; i++)
    {
        if(scanf("%d", &n))
            nArray[i] = n;
        else
            break; 
    }

    i = 0;
    while (i < 16)
    {
        printf("%3d", nArray[i]);
        i++;
        if(i % 4 == 0)
            printf("\n");
    }

    rowSum1 = nArray[0] + nArray[1] + nArray[2] + nArray[3];
    rowSum2 = nArray[4] + nArray[5] + nArray[6] + nArray[7];
    rowSum3 = nArray[8] + nArray[9] + nArray[10] + nArray[11];
    rowSum4 = nArray[12] + nArray[13] + nArray[14] + nArray[15];

    colSum1 = nArray[0] + nArray[4] + nArray[8] + nArray[12];
    colSum2 = nArray[1] + nArray[5] + nArray[9] + nArray[13];
    colSum3 = nArray[2] + nArray[6] + nArray[10] + nArray[14];
    colSum4 = nArray[3] + nArray[7] + nArray[11] + nArray[15];

    diagonalSum1 = nArray[0] + nArray[5] + nArray[10] + nArray[15];
    diagonalSum2 = nArray[3] + nArray[6] + nArray[9] + nArray[12];

    printf("Row sums:%3d%3d%3d%3d\n", rowSum1, rowSum2, rowSum3, rowSum4);
    printf("Column sums: %3d%3d%3d%3d\n", colSum1, colSum2, colSum3, colSum4);
    printf("Diagonal sums: %3d%3d\n", diagonalSum1, diagonalSum2);

    return 0;
}


