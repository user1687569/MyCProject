//Copyright (c) 2022 user1687569
#include <stdio.h>

#define N 10

/*
 * 将指针作为参数求数组中的最大值和最小值
 */
void max_min(int a[], int n, int *max, int *min);

int main()
{
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &b[i]);
    
    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}


void max_min(int a[], int n, int *max, int *min)
{
    int i;

    *max = *min = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > *max)
            *max = a[i];
        else if(a[i] < *min)
            *min = a[i];
    }
}
