/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_DIGITS  10
#define MAX_DISPLAY_ROW 3


const int segments[10][7] = {
        {1, 1, 1, 1, 1, 1, 0},  /* 0 */
        {0, 1, 1, 0, 0, 0, 0},  /* 1 */
        {1, 1, 0, 1, 1, 0, 1},  /* 2 */
        {1, 1, 1, 1, 0, 0, 1},  /* 3 */
        {0, 1, 1, 0, 0, 1, 1},  /* 4 */
        {1, 0, 1, 1, 0, 1, 1},  /* 5 */
        {1, 0, 1, 1, 1, 1, 1},  /* 6 */
        {1, 1, 1, 0, 0, 0, 0},  /* 7 */
        {1, 1, 1, 1, 1, 1, 1},  /* 8 */
        {1, 1, 1, 0, 0, 1, 1}   /* 9 */
    };
char digits[MAX_DISPLAY_ROW][4];


void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(char *arrPrint, int count);

//  _       _   _       _   _   _   _   _  * 10
// | |   |  _|  _| |_| |_  |_    | |_| |_| * 10
// |_|   | |_   _|   |  _| |_|   | |_|   | * 10


int main()
{
    int digit;
    char ch;
    int count = 0;
    int digitArray[MAX_DIGITS] = {0};

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n' && count < MAX_DIGITS)
    {
        if(ch >= '0' && ch <= '9')
        {
            digitArray[count++] = ch - '0';
        }
    }

    char digitsDisplay[MAX_DIGITS][4*count];

    for (int i = 0; i < count; i++)
    {
        clear_digits_array();
        digit = digitArray[i];
        process_digit(digit, 0);

        for (int j = 0; j < MAX_DISPLAY_ROW; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                digitsDisplay[j][k + i*4] = digits[j][k];
            }
        }
    }

    for (int i = 0; i < MAX_DISPLAY_ROW; i++)
    {
        print_digits_array(digitsDisplay[i], count);
    }
    
    exit(EXIT_SUCCESS);
}


void clear_digits_array(void)
{
    for (int i = 0; i < MAX_DISPLAY_ROW; i++) 
    {
		for (int j = 0; j < 4; j++) 
        {
			digits[i][j] = ' ';
		}
	}
}


void process_digit(int digit, int position)
{
    if(segments[digit][0] == 1)
		digits[0][1] = '_';
	if(segments[digit][1] == 1)
		digits[1][2] = '|';
	if(segments[digit][2] == 1)
		digits[2][2] = '|';
	if(segments[digit][3] == 1)
		digits[2][1] = '_';
	if(segments[digit][4] == 1)
		digits[2][0] = '|';
	if(segments[digit][5] == 1)
		digits[1][0] = '|';
	if(segments[digit][6] == 1)
		digits[1][1] = '_';
}


void print_digits_array(char *arrPrint, int count)
{
    int j = 0;
	for ( ; j < 4*count; j++) 
    {
		printf("%c", *(arrPrint+j));
	}
	printf("* %d\n", count);
}

