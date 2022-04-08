//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS   4
#define NUM_RANKS   13

int main()
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char rank_code[] = {
        '2', '3', '4', '5', '6', '7', '8', '9',
        't', 'j', 'q', 'k', 'a'
    };

    const char suit_code[] = {'c', 'd', 'h', 's'};

    /*
     * time函数,来自于<time.h>返回当前的时间, 用一个数表示
     * srand函数, 来自于<stdlib.h>, 初始化C语言的随机数生成器
     * 通过把time函数的返回值传递给函数srand可以避免程序在每次运行时发同样的排
     */
    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand: ");
    while (num_cards > 0)
    {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;

        if(!in_hand[suit][rank])
        {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    
    printf("\n");

    return 0;
}



