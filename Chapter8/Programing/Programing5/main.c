//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdbool.h>

#define NUM_RATES   ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main()
{
    int i, low_rate, num_years, year;
    int month;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);

    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for(i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }

    printf("\n");
    for(year = 1; year <= num_years; year++)
    {
        printf("%3d    ", year);
        for(i = 0; i < NUM_RATES; i++)
        {
            for (month = 1; month <= 12; month++)
                value[i] += ((double) (low_rate + i) / 12) / 100.0 * value[i];            
            
            // value[i] += (low_rate+i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}


// Original data
// Enter interest rate: 6
// Enter number of years: 5
// Years     6%     7%     8%     9%    10%
//   1     106.00 107.00 108.00 109.00 110.00
//   2     112.36 114.49 116.64 118.81 121.00
//   3     119.10 122.50 125.97 129.50 133.10
//   4     126.25 131.08 136.05 141.16 146.41
//   5     133.82 140.26 146.93 153.86 161.05


// Enter interest rate: 6
// Enter number of years: 5
// Years     6%     7%     8%     9%    10%
//   1     106.17 107.23 108.30 109.38 110.47
//   2     112.72 114.98 117.29 119.64 122.04
//   3     119.67 123.29 127.02 130.86 134.82
//   4     127.05 132.21 137.57 143.14 148.94
//   5     134.89 141.76 148.98 156.57 164.53

