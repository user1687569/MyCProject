//Copyright (c) 2022 user1687569
#include <stdio.h>

#define N 10

//处理多维数组的列
//int a[NUM_ROWS][NUM_COLS], (*p)[NUM_COLS], i;
//...
//for(p = &a[0]; p < &a[NUM_ROWS]; p++)
//   (*p)[i] = 0;


int main()
{
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for(p = a; p < a + N; p++)
        scanf("%d", p);
    
    printf("In reverse order: ");
    for(p = a + N - 1; p >= a; p--)
        printf(" %d", *p);
    printf("\n");

    return 0;
}


