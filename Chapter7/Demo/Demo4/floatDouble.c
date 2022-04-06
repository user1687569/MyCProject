//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <float.h>

void RDFloat();
void RDDouble();
void RDLongDouble();


int main()
{
    RDFloat();
    RDDouble();
    RDLongDouble();

    return 0;
}


void RDFloat()
{
    float f;

    printf("Enter a float number(%%e): ");
    scanf("%e", &f);
    printf("Float number: %e\n", f);

    printf("Enter a float number(%%f): ");
    scanf("%f", &f);
    printf("Float number: %f\n", f);

    printf("Enter a float number(%%g): ");
    scanf("%g", &f);
    printf("Float number: %g\n", f);
}


void RDDouble()
{
    double d;

    printf("Enter a double number: ");
    scanf("%lf", &d);

    printf("Double number: %lf\n", d);
}


void RDLongDouble()
{
    long double ld;

    printf("Enter a long double number: ");
    scanf("%Lf", &ld);

    printf("long double number: %Lf\n", ld);
}


