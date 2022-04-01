//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{
    int d;
    int i1, i2, i3, i4, i5;
    int j1, j2, j3, j4, j5;
    int first_num, second_num, total;

    printf("Enter the first(single) digit: ");
    scanf("%1d", &d);       //%1d匹配只有一位的整数

    printf("d = %d", d);
    // printf("Enter the first group of five digits: ");
    // scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    // printf("Enter second group of five digits: ");
    // scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    // first_num = d + i2 + i4 + j1 + j3 + j5;
    // second_num = i1 + i3 + i5 + j2 + j4;
    // total = 3 * first_num + second_num;

    // printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}

