//Copyright (c) 2022 user1687569
#include <stdio.h>


//C99中的变长数组
int main()
{
    int i, n;
    // unsigned int count;
    // int array[] = {4, 9, 1, 8, [0] = 5, 7};
    // // int array[] = {4, 9, 1, 8, 7};
    // for(count = 0; count < sizeof(array)/sizeof(array[0]); count++)
    // {
    //     printf("%d ", array[count]);
    // }
    // printf("\n");

    printf("How many numbers do you want to reverse?");
    scanf("%d", &n);

    int a[n];   //C99 only - length of array depends on n
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("In reverse order: ");
    for(i = n - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");



    return 0;
}



