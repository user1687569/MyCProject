//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int value;
    struct node *next;
};

int main()
{
    int array[] = {89, 12, 32, 43, 67, 91, 25};

    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
        printf("array[%d] = %d\n", i, array[i]);

    return 0;
}


// add_to_list, 此函数用来在链表的开始处插入结点.
// 当调用函数add_to_list时, 我们会传递给它指向原始链表首结点的指针, 
// 然后函数会返回指向新链表首结点的指针:
struct node *add_to_list(struct node *list, int n)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = list;
    return new_node;
}


// 假设修改了函数使它不再返回new_node, 而是把new_node赋值给list.
// 换句话说, 把return语句从函数add_to_list中移走, 同时用下列语句进行替换:
// list = new_node;
// 可惜的是, 这个想法无法实现.
// 假设按照下列方式调用函数add_to_list:
// add_to_list(first, 10);
// 在调用点, 会把first复制给list. 
// 函数内的最后一行改变了list的值, 使它指向了新的结点.
// 但是, 此赋值操作对first没有影响.

// 让函数add_to_list修改first是可能的, 但是这就要求给函数add_to_list传递一个
// 指向first的指针. 下面是此函数的正确形式:
void add_to_list(struct node **list, int n)
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if(new_node == NULL)
    {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = *list;
    *list = new_node;
}


