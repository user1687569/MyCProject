//Copyright (c) 2022 user1687569
#include <stdio.h>

int main()
{   
    int gsiPrefix;
    int group;
    int publisher;
    int itemNum;
    int chkDigit;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsiPrefix, &group,
                        &publisher, &itemNum, &chkDigit);

    printf("GSI prefix: %d\n", gsiPrefix);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d\n", chkDigit);

    return 0;
}



