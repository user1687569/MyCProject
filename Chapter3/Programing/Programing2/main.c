//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{   
    int number;
    float price;
    int month;
    int day;
    int year;

    printf("Enter item number: ");
    scanf("%d", &number);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);
    
    printf("%-10s%-10s%-10s\n", "Item", "Unit", "Purchase");
    printf("%-10s%-10s%-10s\n", "", "Price", "Date");

    printf("%-10d$%7.2f  %2d/%2d/%4d\n", number, price, month, day, year);

    return 0;
}



