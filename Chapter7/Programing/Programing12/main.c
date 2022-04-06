//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

float operateFunc(float cur, float value, char optSymbol);

int main()
{
    char ch;
    char expression[30] = {0};
    unsigned int count = 0;
    int nValue = 0;
    float fValue = 0.0f;
    float resultValue = 0;
    char tempExp[6] = {0};
    unsigned tempCnt = 0;
    char optSymLast = 0;
    char optSymCurrent = 0;

    printf("Enter an expression: ");
    while ((ch = getchar()) != '\n')
    {
        expression[count] = ch;
        count++;
    }
    expression[count] = '\0';

    for (int i = 0; i < count; i++)
    {
        if(expression[i] == '+' || expression[i] == '-' ||
           expression[i] == '*' || expression[i] == '/')
        {
            tempExp[tempCnt] = '\0';
            optSymCurrent = expression[i];
            if(strchr(tempExp, '.'))
            {
                fValue = atof(tempExp);
                if(optSymLast != 0)
                {
                    resultValue = operateFunc(resultValue, fValue, optSymLast);
                }
                else
                {
                    resultValue = fValue;
                }
            }
            else
            {
                nValue = atoi(tempExp);
                if(optSymLast != 0)
                {
                    resultValue = operateFunc(resultValue, (float)nValue, optSymLast);
                } 
                else
                {
                    resultValue = nValue;
                }
            }
            optSymLast = optSymCurrent;
            memset(tempExp, 0, sizeof(tempExp));
            tempCnt = 0;
        }
        else
        {
            tempExp[tempCnt] = expression[i];
            tempCnt++;
        }
    }

    tempExp[tempCnt] = '\0';
    if(strchr(tempExp, '.'))
    {
        fValue = atof(tempExp);
        resultValue = operateFunc(resultValue, fValue, optSymLast);
    }
    else
    {
        nValue = atoi(tempExp);
        resultValue = operateFunc(resultValue, (float)nValue, optSymLast);
    }
    printf("Value of expression: %f\n", resultValue);
    
    return 0;
}


// float operateFloatFunc(float cur, float value, char optSymbol)
float operateFunc(float cur, float value, char optSymbol)
{
    float curValue = cur;
    switch (optSymbol)
    {
    case '+':
        curValue = cur + value;
        break;
    case '-':
        curValue = cur - value;
        break;
    case '*':
        curValue = cur * value;
        break;
    case '/':
        curValue = cur / value;
        break;
    default:
        break;
    }

    return curValue;
}
