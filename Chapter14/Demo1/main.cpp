//Copyright (c) 2022 user1687569
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

//宏定义可以包含两个专用的运算符 #和##
//编译器不会识别这两种运算符, 它们会在预处理时被执行

//#运算符将宏的一个参数转换为字符串字面量, 
//它仅允许出现在带参数的宏的替换列表中
#define PRINT_INT(n)    printf(#n " = %d\n", n)     

//##运算符可以将两个记号(如标识符)"粘合"在一起, 称为一个记号.
//如果其中一个操作数是宏参数, "粘合"会在形式参数被相应的实际参数替换后发生
#define MK_ID(n)        i##n

#define GENERIC_MAX(type)           \
type type##_max(type x, type y)     \
{                                   \
    return x > y ? x : y;           \
}   


#define TEST(condition, ...) ((condition) ?  \
    printf("Passed test:%s\n", #condition) : \
    printf(__VA_ARGS__))


#define N
#ifndef N
#error  You are not right!
#endif


#if SHRT_MAX < 10
#error Short type number is wrong!
#endif

#define FUNCTION_CALLED()  printf("%s called\n", __func__);
#define FUNCTION_RETURNS()  printf("%s returns\n", __func__);

int main()
{
    int i = 5;
    PRINT_INT(i);

    int MK_ID(1), MK_ID(2), MK_ID(3);

    getchar();

    printf("__LINE__ = %d\n", __LINE__);
    printf("__FILE__ = %s\n", __FILE__);
    printf("__DATE__ = %s\n", __DATE__);
    printf("__TIME__ = %s\n", __TIME__);
#ifdef __STDC__
    printf("__STDC__ = %d\n", __STDC__);
#endif

    int voltage = 3;
    int max_voltage = 2;
    TEST(voltage <= max_voltage, 
        "Voltage %d exceeds %d\n", voltage, max_voltage);

    FUNCTION_CALLED()
    FUNCTION_RETURNS()
    // FUNCTION_CALLED();
    // FUNCTION_RETURNS();

    return 1;
}




