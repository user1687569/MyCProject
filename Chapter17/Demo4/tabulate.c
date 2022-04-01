//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <math.h>

void tabulate(double (*f)(double),
              double first, double last, double increment);


int main()
{
    double final, increment, initial;

    printf("Enter initial value: ");
    scanf("%lf", &initial);

    printf("Enter final value: ");
    scanf("%lf", &final);

    printf("Enter increment: ");
    scanf("%lf", &increment);

    printf("\n      x      cos(x)"
           "\n   ------   ------\n");
    tabulate(cos, initial, final, increment);

    printf("\n      x      sin(x)"
           "\n   ------   ------\n");
    tabulate(sin, initial, final, increment);

    printf("\n      x      tan(x)"
           "\n   ------   ------\n");
    tabulate(tan, initial, final, increment);
    
    return 0;
}


void tabulate(double (*f)(double),
              double first, double last, double increment)
{
    double x;
    int i, num_intervals;

    num_intervals = ceil((last - first) / increment);
    for(i = 0; i <= num_intervals; i++)
    {
        x = first + i * increment;
        printf("%10.5f %10.5f\n", x, (*f)(x));
    }
}



