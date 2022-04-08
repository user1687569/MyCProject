//Copyright (c) 2022 user1687569
#include <stdio.h>
#include <ctype.h>

/*
 * 凯撒加密
 * Julius Caesar
 */
int main()
{
    int shiftNumber;
    char msg[80] = {0};
    char cryptedMsg[80] = {0};
    char ch;
    int count = 0;

    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n')
    {
        msg[count++] = ch;
    }
    
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shiftNumber);

    for (int i = 0; i < count; i++)
    {
        if(msg[i] >= 'a' && msg[i] <= 'z')
        {
            cryptedMsg[i] = ((msg[i] - 'a') + shiftNumber) % 26 + 'a';
        }
        else if(msg[i] >= 'A' && msg[i] <= 'Z')
        {
            cryptedMsg[i] = ((msg[i] - 'A') + shiftNumber) % 26 + 'A';
        }
        else
            cryptedMsg[i] = msg[i];
    }
    
    printf("Encrypted message: %s\n", cryptedMsg);

    return 0;
}

