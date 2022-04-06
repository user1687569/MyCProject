//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <limits.h>

int main()
{
    short int shortInt = 32767;
    printf("short int = %d\n", shortInt);           /*  32767 */
    shortInt += 1;  
    printf("short int = %d\n", shortInt);           /* -32768 */

    unsigned short int uShortInt = 65535;
    printf("unsigned short int = %d\n", uShortInt); /*  65535 */
    uShortInt += 1;
    printf("unsigned short int = %d\n", uShortInt); /*      0 */

    return 0;
}

