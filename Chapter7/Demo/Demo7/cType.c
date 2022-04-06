//Copyright (c) 2022 user1687569
#include <stdio.h>

/*
 * 如果在一个程序中混合使用getchar函数和scanf函数, 请一定要注意.
 * scanf函数倾向于遗留下它"扫视"过但未读取的字符(包括换行符).
 * getchar函数随后将取回第一个剩余字符, 但这并不是我们所希望的结果.
 */

int main()
{
    int number;
    int command;

    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("number = %d\n", number);

    printf("Enter a command: \n");
    command = getchar();
    printf("command = %d\n", command);
    printf("command = %c\n", command);

    return 0;
}





