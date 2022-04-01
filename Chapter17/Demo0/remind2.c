//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int array[] = {89, 12, 32, 43, 67, 91, 25};

    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
        printf("array[%d] = %d\n", i, array[i]);

    return 0;
}



