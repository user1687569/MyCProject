/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
 
#define MAX_DIGITS 3
#define MAX_NUM 20

int segments[] = {123, 72, 61, 109, 78, 103, 119, 73, 127 ,111};
char digits[MAX_DIGITS][4];
 
 
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(char *arrPrint, int count);
 
 
int main(void) 
{
	char ch;
	char chArr[MAX_NUM];
	int count = 0, i = 0;

    printf("Enter a number:");
	ch = getchar();
	while (ch != '\n') 
    {
		if (ch >= '0' && ch <= '9') 
        {
			chArr[count++] = ch;
		}
		ch = getchar();
	}

	int segmentsArr[count];
	for (; i < count; i++) 
	{
		int j = chArr[i] - '0';
		segmentsArr[i] = segments[j];
	}
 
	char digitsDisplay[MAX_DIGITS][4*count];
    {
        int i, j;
        for (i = 0; i < MAX_DIGITS; i++) 
        {
            for (j = 0; j < 4*count; j++) 
            {
                digits[i][j] = ' ';
            }
        }
    }

	for (i = 0; i < count; i++) 
    {
		clear_digits_array();
		process_digit(segmentsArr[i], i);
        {
            int j, k;
            for (j = 0; j < MAX_DIGITS; j++) 
			{
                for (k = 0; k < 4; k++) 
				{
                    digitsDisplay[j][i*4 + k] = digits[j][k];
                }
            }
        }
	}	
 
	for (i = 0; i < MAX_DIGITS; i++) 
    {
		print_digits_array(digitsDisplay[i], count);
	}
 
	return 0;
}
 
void clear_digits_array(void) 
{
	int i, j;
	for (i = 0; i < MAX_DIGITS; i++) 
    {
		for (j = 0; j < 4; j++) 
        {
			digits[i][j] = ' ';
		}
	}
}
 
void process_digit(int digit, int position) 
{
	int i = 0, j = 0;
	for ( ; i < 7; i++) {
/*
		if ((digit >> i) & 1) {
			switch(i) {
			case 0:
				digits[0][1] = '_';
				break;
			case 1:
				digits[1][0] = '|';
				break;
			case 2:
				digits[1][1] = '_';
				break;
			case 3:
				digits[1][2] = '|';
				break;
			case 4:
				digits[2][0] = '|';
				break;
			case 5:
				digits[2][1] = '_';
				break;
			case 6:
				digits[2][2] = '|';
				break;
			}
		}
*/
		if (digit & 0x1) {
			digits[0][1] = '_';
		}
		if (digit & 0x2) {
			digits[1][0] = '|';
		}
		if (digit & 0x4) {
			digits[1][1] = '_';
		}
		if (digit & 0x8) {
			digits[1][2] = '|';
		}
		if (digit & 0x10) {
			digits[2][0] = '|';
		}
		if (digit & 0x20) {
			digits[2][1] = '_';
		}
		if (digit & 0x40) {
			digits[2][2] = '|';
		}
	} 
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
 