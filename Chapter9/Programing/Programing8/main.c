//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

int  roll_dice(void);
bool play_game(void);
void printDice(int n);

int main()
{
    char ch;
    bool result = false;
    srand((unsigned) time(NULL));

    for(;;)
    {
        result = play_game();
        printf("%s\n\n", result == true ? "You win!" : "You lose!");
        while (getchar() != '\n')
            ;
        
        printf("Play again?(y/n) ");
        scanf("%c", &ch);
        printf("ch = %d\n", ch);
        if(ch == 'y' || ch == 'Y')
            ;
        else
            break;
    }

    return 0;
}


int  roll_dice(void)
{
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}


bool play_game(void)
{
    int dice;
    int firstDice;
    bool result = false;

    firstDice = roll_dice();
    printDice(firstDice);
    if(firstDice == 7 || firstDice == 11)
    {
        printDice(firstDice);
        return true;
    }
    else if (firstDice == 2 || firstDice == 3 || firstDice == 12)
    {
        printDice(firstDice);
        return false;
    }
    
    printf("Your point is %d\n", firstDice);
    while (1)
    {
        dice = roll_dice();
        printDice(dice);
        if(dice == firstDice)
        {
            result = true;
            break;
        }
        else if(dice == 7)
        {
            result = false;
            break;
        }
    }

    return result;
}

void printDice(int n)
{
    printf("You rolled: %d\n", n);
}