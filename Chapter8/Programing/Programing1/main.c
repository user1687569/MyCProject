//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdbool.h>    /* C99 only */

void func1();
void func2();
void func3();

int main()
{
    // func1();
    // func2();
    func3();
    return 0;
}


void func1()
{
    bool digit_seen[10] = {false};
    bool digit_print[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digit(s): ");
    while (n > 0)
    {
        digit = n % 10;
        if(digit_seen[digit])
        {
            if(digit_print[digit] == false)
            {
                printf("%d ", digit);
                digit_print[digit] = true;
            }
        }
        digit_seen[digit] = true;
        n /= 10;
    }
}


void func2()
{
    int  digit_count[10] = {0};
    int  digit;
    long n;
    int i;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_count[digit] += 1;
        n /= 10;
    }

    printf("%-12s", "Digit:");
    for (i = 0; i < 10; i++)
    {
        printf("%3d", i);
    }

    printf("\n");
    printf("%-12s", "Occurrences:");
    for (i = 0; i < 10; i++)
    {
        printf("%3d", digit_count[i]);
    }
}


void func3()
{
    bool digit_seen[10] = {false};
    int digit;
    long n;
    int i;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%ld", &n);
        if(n <= 0)
            break;
        
        for (i = 0; i < 10; i++)
        {
            digit_seen[i] = false;
        }
        
        while (n > 0)
        {
            digit = n % 10;
            if(digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }

        if(n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");
    }
}
