/* 
 * Copyright (c) 2022 user1687569
 */
#include <stdio.h>
/*
 * C89
 *  8 %  5 =  3
 * -8 %  5 = -3
 *  8 % -5 =  3
 * -8 % -5 = -3
**/
/*
 * C99
 *  8 %  5 =  3
 * -8 %  5 = -3
 *  8 % -5 =  3
 * -8 % -5 = -3
**/

int main()
{
    printf(" 8 %%  5 = %2d\n",  8 %  5);        
    printf("-8 %%  5 = %2d\n", -8 %  5);
    printf(" 8 %% -5 = %2d\n",  8 % -5); 
    printf("-8 %% -5 = %2d\n", -8 % -5); 
    return 0;
}

