//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{
    int i1, i2 = 30, i3;
    float f1, f2;

    // "%d" 与 " %d" 等价
    scanf("%d", &i1);
    printf("i1 = %d\n", i1);
    scanf(" %d", &i2);
    printf("i2 = %d\n", i2);

    // "%d-%d-%d" 与  "%d -%d -%d" 不等价
    //第一种类型读取%d之后, 会检测下一个字符是否为 -, 如果是空格的话, 
    //scanf将不再查看格式串的剩余部分而立即返回, i2, i3将保留原有的值
    scanf("%d-%d-%d", &i1, &i2, &i3);
    printf("i1 = %d, i2 = %d, i3 = %d\n", i1, i2, i3);
    scanf("%d -%d -%d", &i1, &i2, &i3);
    printf("i1 = %d, i2 = %d, i3 = %d\n", i1, i2, i3); 

    // "%f" 与 "%f " 不等价,
    // "%f " 需要用户主动关闭输入
    scanf("%f", &f1);
    printf("f1 = %f\n", f1);
    scanf("%f ", &f2);
    printf("f2 = %f\n", f2); 

    // "%f,%f" 与 "%f, %f" 等价
    scanf("%f,%f", &f1, &f2);
    printf("f1 = %f, f2 = %f\n", f1, f2);
    scanf("%f, %f", &f1, &f2);
    printf("f1 = %f, f2 = %f\n", f1, f2); 
    

    return 0;
}

