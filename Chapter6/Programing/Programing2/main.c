//Copyright (c) 2022 user1687569
#include <stdio.h>

/*
 *计算最大公约数
 *Euclid算法
 */
int main()
{   
    int m, n;
    int remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (1)
    {
        if(n == 0)
            break;
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", m);
    
    return 0;
}



