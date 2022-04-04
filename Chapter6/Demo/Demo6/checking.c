/*
 *Copyright (c) 2022 user1687569
 */
/* Balances a checkbook */

#include <stdio.h>

/*
 * credit: 把(钱)记入总账, 把钱存入(账户)
 * debit : 记入(账户)的借方, 借记; (从银行账户中)取款
 */

int main()
{
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, ");
    printf("3=balance, 4=exit\n\n");

    for(;;)
    {
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch (cmd)
        {
        case 0:
            balance = 0.0f;
            break;
        case 1:
            printf("Enter amount of credit: ");
            scanf("%f", &credit);
            balance += credit;
            break;
        case 2:
            printf("Enter amount of debit: ");
            scanf("%f", &debit);
            balance -= debit;
            break;
        case 3:
            printf("Current balance: $%.2f\n", balance);
            break;
        case 4:
            return 0;
        default:
            printf("Commands: 0=clear, 1=credit, 2=debit, ");
            printf("3=balance, 4=exit\n\n");
            break;
        }
    }
    
    return 0;
}

