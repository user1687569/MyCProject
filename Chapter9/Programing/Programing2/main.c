/*
 *Copyright (c) 2022 user1687569
 */
#include <stdio.h>

float getTax(float income);

int main(void)
{
    float income, tax;

    printf("Enter income: ");
    scanf("%f", &income);
    
    tax = getTax(income);
    printf("Tax: $%.2f\n", tax);
    return 0;
}


float getTax(float income)
{
    float tax;

    if(income < 750.00f)
        tax = 0.01f * income;
    else if(income >= 750.00f && income < 2250.00f)
        tax = 7.50 + 0.02f * (income - 750.00f);
    else if(income >= 2250.00f && income < 3750.00f)
        tax = 37.50 + 0.03f * (income - 2250.00f);
    else if(income >= 3750.00f && income < 5250.00f)
        tax = 82.50 + 0.04f * (income - 3750.00f);
    else if(income >= 5250.00f && income < 7000.00f)
        tax = 142.50 + 0.05f * (income - 5250.00f);
    else if(income >= 7000.00f)
        tax = 230.00 + 0.06f * (income - 7000.00f);
    
    return tax;
}

