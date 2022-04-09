//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdbool.h>    /* C99 only */

int selection_sort(int a[], int n);

int main()
{
    int a[] = {12, 32, 45, 58, 79, 23, 96};
    int n = 7;
    
    selection_sort(a, n);
    for (int i = 0; i < 7; i++)
    {
        printf("%3d", a[i]);
    }
    
    return 0;
}


int selection_sort(int a[], int n)
{
    int max = a[0];
    int index = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }

    if(index != n-1 && n-1 > 0)
    {
        temp = a[n-1];
        a[n-1] = max;
        a[index] = temp;
    }

    if(n > 0)
        return selection_sort(a, n-1);
    else 
        return 0;
}

