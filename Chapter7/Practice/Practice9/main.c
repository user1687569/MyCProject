/*
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
#include <ctype.h>
#include <limits.h>

void func9();
void func10();
void func11();
void func12();
void func13();
void func14();
void func15();

int main()
{
    // func9();
    // func10();
    // func11();
    // func12();
    // func13();
    func14();
    return 0;
}


void func9()
{
    int i, j;
    i = 5;
    j = 2;
    /* result type is int, sizeof(expression) is 4 */
    printf("sizeof(i / j + 'a') = %d\n", sizeof(i / j + 'a'));
}


void func10()
{
    int i;
    long int j;
    unsigned int k;

    i = 1;
    j = 2;
    k = 3;

    printf("sizeof(int) = %d\n", sizeof(int));
    printf("sizeof(unsigned int) = %d\n", sizeof(unsigned int));

    /* 当unsigned int 与 int相互操作时, int会提升为unsigned int 
     * 所以返回值类型为 unsigned int.
     */
    printf("sizeof(i + (int)j * k) = %d\n", 
            sizeof(i + (int)j * k));
}


void func11()
{
    int i;
    float f;
    double d;

    i = 1;
    f = 2.0f;
    d = 3.0;

    printf("sizeof(int) = %d\n", sizeof(int));
    printf("sizeof(float) = %d\n", sizeof(float));
    printf("sizeof(double) = %d\n", sizeof(double));

    /*
     * 所以返回值类型为 double.
     */
    printf("sizeof(i * f / d) = %d\n", 
            sizeof(i * f / d));
}


void func12()
{
    int i;
    float f;
    double d;

    i = 1;
    f = 2.0f;
    
    d = i + f;

    printf("sizeof(int) = %d\n", sizeof(int));
    printf("sizeof(float) = %d\n", sizeof(float));
    printf("sizeof(double) = %d\n", sizeof(double));

    printf("sizeof(i + f) = %d\n", sizeof(i + f));
    printf("d = %f\n", d);
}

/*
printf("sizeof(char) = %d\n", sizeof(char));        //1
printf("sizeof(short) = %d\n", sizeof(short));      //2
printf("sizeof(int) = %d\n", sizeof(int));          //4
printf("sizeof(long) = %d\n", sizeof(long));        //4
printf("sizeof(float) = %d\n", sizeof(float));      //4
printf("sizeof(double) = %d\n", sizeof(double));    //8
*/

void func13()
{
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    printf("c = %d\n", c);
    printf("(c*i) =%10d, sizeof(c*i)   = %d\n", c * i, sizeof(c * i));
    printf("(f/c) =%10f, sizeof(f/c)   = %d\n", f / 1, sizeof(f / 1));
    printf("(f-d) =%10f, sizeof(f-d)   = %d\n", f - d, sizeof(f - d));
    printf("(s+m) =%10ld,sizeof(s+m)   = %d\n", s + m, sizeof(s + m));
    printf("(d/s) =%10f, sizeof(d/s)   = %d\n", d / s, sizeof(d / s));
    printf("(int)f=%10d, sizeof((int)f)= %d\n", (int)f, sizeof((int)f));    
}

/*
 * Converting f to int will fail if the value
 * stored in f exceeds the largest value of type int.
 */
void func14()
{   
    float f, frac_part;

    // f = 9.6f;
    // f = 32000.8f;
    // f = 32767.8f;
    f = 62767.8f;    
    frac_part = f - (int)f;

    printf("frac_part = %.2f\n", frac_part);
    printf("Size of int: %d\n", sizeof(int));
}


void func15()
{
    typedef char        Int8;
    typedef short int   Int16;
    typedef int         Int32;
}




