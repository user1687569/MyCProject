//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{   
    int   number;
    float price;
    float commission, value;
    float competitorComm;

    printf("Enter number of shares: ");
    scanf("%d", &number);

    printf("Enter price of each share: ");
    scanf("%f", &price);

    value = number * price;

    if(value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else 
        commission = 255.00f + .0009f * value;
    
    if(commission < 39.00f)
        commission = 39.00f;

    if(number < 2000)
        competitorComm = 33.0f + 0.03f * number;
    else
        competitorComm = 33.0f + 0.03f * 2000 + 0.02f * (number - 2000);
    
    printf("Commission: $%.2f\n", commission);
    printf("Competitor Commission: $%.2f\n", competitorComm);

    return 0;
}


