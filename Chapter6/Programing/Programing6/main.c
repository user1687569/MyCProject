//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{   
    int i = 2;
    int n;

    printf("Please enter a number: ");
    scanf("%d", &n);

    while (1)
    {
        if(i * i <= n)
            printf("%d\n", i * i);
        else
            break;
        i += 2;
    }
    
    return 0;
}



