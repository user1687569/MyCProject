/*
 * Copyright (c) 2022 user1687569
 */
/*
 * Classifies a poker hand
 */

/* #include directives go here */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* #define directives go here */
#define NUM_RANKS   13
#define NUM_SUITS   4
#define NUM_CARDS   5

/* declarations of external variables go here */
bool straight, flush, four, three;
int pairs;      /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(int handCard[][2]);
void analyze_hand(int handCard[][2]);
void print_result(void);


int main()
{   
    int hand[5][2];
    for(;;)
    {
        read_cards(hand);
        analyze_hand(hand);
        print_result();
    }
}


void read_cards(int handCard[][2])
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;
    bool duplicateFlag = false;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            handCard[i][j] = 0;
        }
    }
    
    while (cards_read < NUM_CARDS)
    {
        bad_card = false;

        printf("Enter a card: ");
        rank_ch = getchar();
        switch (rank_ch)
        {
        case '0':           exit(EXIT_SUCCESS);
        case '2':           rank = 0;   break;
        case '3':           rank = 1;   break;
        case '4':           rank = 2;   break;
        case '5':           rank = 3;   break;
        case '6':           rank = 4;   break;
        case '7':           rank = 5;   break;
        case '8':           rank = 6;   break;
        case '9':           rank = 7;   break;
        case 't': case 'T': rank = 8;   break;
        case 'j': case 'J': rank = 9;   break;
        case 'q': case 'Q': rank = 10;  break;
        case 'k': case 'K': rank = 11;  break;
        case 'a': case 'A': rank = 12;  break;
        default:            bad_card = true;    break;
        }

        suit_ch = getchar();
        switch (suit_ch)
        {
        case 'c': case 'C': suit = 0;   break;
        case 'd': case 'D': suit = 1;   break;
        case 'h': case 'H': suit = 2;   break;
        case 's': case 'S': suit = 3;   break;
        default:            bad_card = true;    break;
        }

        while ((ch = getchar()) != '\n')
        {
            if(ch != ' ')
                bad_card = true;
        }

        if(bad_card)
        {
            printf("Bad card; ignored.\n");
            continue;
        }
        
        duplicateFlag = false;
        for (int i = 0; i < cards_read; i++)
        {
            if(rank == handCard[i][0] && suit == handCard[i][1])
            {
                printf("Duplicate card; ignored.\n");
                duplicateFlag = true;
                break;
            }
        }
        
        if(duplicateFlag == false)
        {
            handCard[cards_read][0] = rank;
            handCard[cards_read][1] = suit;
            cards_read++;
        }
    }
}

#define RANK    0
#define SUIT    1

void analyze_hand(int handCard[][2])
{
    int rank, suit;

    straight = true;   /* 同花顺 */
    flush = true;      /* 同花的一手牌 */
    four = false;
    three = false;
    pairs = 0;  

    // int card, pass;
    /* sort cards by rank */
    /* 冒泡排序1 */
    // for (pass = 1; pass < NUM_CARDS; pass++)
    // {
    //     for (card = 0; card < NUM_CARDS - pass; card++)
    //     {
    //         rank = handCard[card][0];
    //         suit = handCard[card][1];
    //         if(handCard[card+1][0] < rank)
    //         {
    //             handCard[card][0] = handCard[card+1][0];
    //             handCard[card][1] = handCard[card+1][1];
    //             handCard[card+1][0] = rank;
    //             handCard[card+1][1] = suit; 
    //         }
    //     }
    // }

    /* 冒泡排序2 */
    // for (int i = 1; i < NUM_CARDS; i++)
    // {
    //     for (int j = NUM_CARDS - 1; j >= i; j--)
    //     {
    //         rank = handCard[j][0];
    //         suit = handCard[j][1];
    //         if(handCard[j - 1][0] > rank)
    //         {
    //             handCard[j][0] = handCard[j-1][0];
    //             handCard[j][1] = handCard[j-1][1];
    //             handCard[j-1][0] = rank;
    //             handCard[j-1][1] = suit;
    //         }   
    //     }
    // }

    /* 冒泡排序2优化*/
    // bool flag = true;
    // for (int i = 1; i < NUM_CARDS && flag; i++)
    // {   
    //     for (int j = NUM_CARDS - 1; j >= i; j--)
    //     {
    //         flag = false;
    //         rank = handCard[j][0];
    //         suit = handCard[j][1];
    //         if(handCard[j - 1][0] > rank)
    //         {
    //             handCard[j][0] = handCard[j-1][0];
    //             handCard[j][1] = handCard[j-1][1];
    //             handCard[j-1][0] = rank;
    //             handCard[j-1][1] = suit;
    //             flag = true;
    //         }   
    //     }
    // }

    /* 选择排序 */
    for (int i = 0, min; i < NUM_CARDS - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < NUM_CARDS; j++)
        {
            if(handCard[j][0] < handCard[min][0])
                min = j;
        }

        if(min != i)
        {
            rank = handCard[i][0];
            suit = handCard[i][1];
            handCard[i][0] = handCard[min][0];
            handCard[i][1] = handCard[min][1];
            handCard[min][0] = rank;
            handCard[min][1] = suit; 
        }
    }

    /* check for flush */
    suit = handCard[0][1];
    for (int i = 1; i < NUM_CARDS; i++)
    {
        if(handCard[i][1] != suit)
        {
            flush = false;
            break;
        }
    }

    /* check for straight */
    for (int i = 0; i < NUM_CARDS - 1; i++)
    {
        if(handCard[i][0]+1 != handCard[i+1][0])
        {
            straight = false;
            break;
        }
    }

    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    int card = 0;
    int run;
    while (card < NUM_CARDS)
    {
        rank = handCard[card][0];
        run = 0;
        do
        {
            run++;
            card++;
        } while (card < NUM_CARDS && handCard[card][0] == rank);

        switch (run)
        {
        case 2: pairs++;        break;
        case 3: three = true;   break;
        case 4: four = true;    break;
        default:                break;
        }
    }
}


void print_result()
{
    if(straight && flush)
        printf("Straight flush");
    else if(four)
        printf("Four of a kind");
    else if(three && pairs == 1)
        printf("Full house");
    else if(flush)
        printf("Flush");
    else if(straight)
        printf("Straight");
    else if(three)
        printf("Three of a kind");
    else if(pairs == 2)
        printf("Two pairs");
    else if(pairs == 1)
        printf("Pair");
    else
        printf("High card");
    
    printf("\n\n");
}


