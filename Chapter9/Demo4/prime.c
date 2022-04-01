//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// C99允许在数组参数声明中使用关键字static
// 在下面的例子中, 将static放在数字3之前表明
// 数组a的长度至少可以保证是3
// int sum_array(int a[static 3], int n)
// {
// }


bool is_prime(int n)
{
    int divisor;

    if(n < 1)
        return false;
    
    for(divisor = 2; divisor * divisor <= n; divisor++)
        if(n % divisor == 0)
            return false;
    
    // return true;
    exit(EXIT_SUCCESS);
}


int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(is_prime(n))
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}


