//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>

void plus();
void substract();
void multiply();
void divide();
int calculateGCD(int numerator, int denominator);

int main()
{
    int num1, denom1;
    int num2, denom2;
    char symbol;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);
    while (getchar() != '\n')
        ;
    printf("Enter operation symbol: ");
    scanf("%c", &symbol);
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    switch (symbol)
    {
    case '+':
        plus(num1, denom1, num2, denom2);
        break;
    case '-':
        substract(num1, denom1, num2, denom2);
        break;
    case '*':
        multiply(num1, denom1, num2, denom2);
        break;
    case '/':
        divide(num1, denom1, num2, denom2);
        break;
    default:
        break;
    }

    return 0;
}


void plus(int num1, int denom1, int num2, int denom2)
{   
    int result_num, result_denom;
    int GCD = 1;

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    GCD = calculateGCD(result_num, result_denom);

    printf("Fraction1 plus Fraction2 is %d/%d\n", result_num/GCD, result_denom/GCD);
}


void substract(int num1, int denom1, int num2, int denom2)
{
    int result_num, result_denom;
    int GCD = 1;

    result_num = num1 * denom2 - num2 * denom1;
    result_denom = denom1 * denom2;
    GCD = calculateGCD(result_num, result_denom);

    printf("Fraction1 substract Fraction2 is %d/%d\n", result_num/GCD, result_denom/GCD);
}


void multiply(int num1, int denom1, int num2, int denom2)
{
    int result_num, result_denom;
    int GCD = 1;

    result_num = num1 * num2;
    result_denom = denom1 * denom2;
    GCD = calculateGCD(result_num, result_denom);

    printf("Fraction1 multiply by Fraction2 is %d/%d\n", result_num/GCD, result_denom/GCD);
}


void divide(int num1, int denom1, int num2, int denom2)
{
    int result_num, result_denom;
    int GCD = 1;

    result_num = num1 * denom2;
    result_denom = denom1 * num2;
    GCD = calculateGCD(result_num, result_denom);

    printf("Fraction1 divide by Fraction2 is %d/%d\n", result_num/GCD, result_denom/GCD);
}


int calculateGCD(int numerator, int denominator)
{
    int m, n;
    int remainder;

    n = numerator > 0 ? numerator : -numerator;
    m = denominator > 0 ? denominator : -denominator;

    while (1)
    {
        if(n == 0)
            break;
        remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}

    