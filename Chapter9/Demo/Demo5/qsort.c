//Copyright (c) 2022 user1687569
#include <stdio.h>

//快速排序算法
//1. 选择数组元素e, 然后重新排列数组使得元素从1一直到i-1都是小于或等于e的,
//   元素i包含e, 而元素从i+1一直到n都是大于或等于e的
//2. 通过递归地采用快速排序方法, 对从1到i-1的元素进行排序
//3. 通过递归地采用快速排序方法, 对从i+1到n的元素进行排序

//快速排序算法的算法复杂度为: 
//平均情况: O(nlogn)
//最好情况: O(nlogn)
//最坏情况: O(n^2)

#define N 10

void quicksort(int a[], int low, int high);
int  split(int a[], int low, int high);

int main()
{
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, N - 1);

    printf("In sorted order: ");
    for(i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}


void quicksort(int a[], int low, int high)
{
    int middle;
    if(low >= high) return;
    
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}


int split(int a[], int low, int high)
{
    int part_element = a[low];

    for(;;)
    {
        while (low < high &&  part_element <= a[high])
            high--;
        if(low >= high) break;    
        a[low++] = a[high];

        while (low < high && a[low] <= part_element)
            low++;
        if(low >= high) break;
        a[high--] = a[low];
    }

    a[high] = part_element;
    return high;
}

