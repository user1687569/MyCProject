/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>

void func11();
void func12();
void func13();
void func13_1();
void func14();

int main()
{
    // func11();
    // func12();
    // func13();
    // func13_1();
    func14();
    return 0;
}


void func11()
{
    int i, sum;

    sum = 0;
    for(i = 0; i < 10; i++)
    {
        if(i % 2)
            continue;
        sum += i;
    }

    printf("%d\n", sum);
}


void func12()
{
//     int d, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(d = 2; d * d <= n; d++)
//         if(n % d == 0)
//             goto DONE;
// DONE:
//     if(d * d <= n)
//         printf("%d is divisible by %d\n", n, d);
//     else
//         printf("%d is prime\n", n);

    int d, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(d = 2; d * d <= n; d++)
        if(n % d == 0)
            break;

    if(d * d <= n)
        printf("%d is divisible by %d\n", n, d);
    else
        printf("%d is prime\n", n);
}   


void func13()
{
    int n, m;

    printf("Enter number m: ");
    scanf("%d", &m);

    for(n = 0; m > 0; n++)
        m /= 2;

    printf("n = %d, m = %d\n", n, m);
}

void func13_1()
{
    int n, m;

    printf("Enter number m: ");
    scanf("%d", &m);

    for(n = 1; (m /= 2) > 0; n++)
        ;

    printf("n = %d, m = %d\n", n, m);
}


void func14()
{
    int n;
    
    printf("Enter number n: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("n is even\n");
    else
        printf("n is odd\n");
}
