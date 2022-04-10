/*
 * Copyright (c) 2022 user1687569
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>    /* C99 only */

#define MAX_NUMBER  100

/*
 * external variable 
 */
int secret_number;

/*
 * prototypes
 */
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);


int main()
{
    char command;

    printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
    initialize_number_generator();

    do
    {
        choose_new_secret_number();
        printf("A new number has been chosen.\n");
        read_guesses();
        printf("Play again?(Y/N) ");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y');
    
    return 0;
}


void initialize_number_generator()
{
    srand((unsigned) time(NULL));
}


void choose_new_secret_number()
{
    secret_number = rand() % MAX_NUMBER + 1;
}


void read_guesses()
{
    int guess, num_guesses = 0;
    
    for (;;)
    {
        num_guesses++;
        printf("Enter guess: ");
        scanf("%d", &guess);
        if(guess == secret_number)
        {
            printf("You won in %d guesses!\n\n", num_guesses);
            return;
        }
        else if (guess < secret_number)
        {
            printf("Too low; try again.\n");
        }
        else
            printf("Too high; try again.\n");
    }
}


