//Copyright (c) 2022 user1687569
#include <stdio.h>

/*
 * 测试printf函数的返回
 */

void print_pun(void)
{
    int num_chars = 0;
    num_chars = printf("To C, or not to C: that is the question.\n");
    
    printf("num_chars = %d\n", num_chars);
}


int main()
{
    print_pun();
    return 0;
}




