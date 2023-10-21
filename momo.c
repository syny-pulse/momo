#include <stdio.h>

int main(void) {
    int ch, dh, amount, balance = 5000, pin1 = 2002, pin;
    char number[11]; 

    printf("Welcome to Pulse MoMo. Select an option\n");
    start:

    printf("1. Send Money\n2. Buy Airtime/Bundles\n3. Withdraw Cash\n4. Payments\n5. Financial Services\n6. Savings and loans\n7. School fees\n8. My Account\n");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("1. Send to Airtel\n2. Send to other network\n");
            scanf("%d", &dh);  
            printf("Enter number to send to: ");
            scanf("%s", number);
            printf("Enter amount: ");
            scanf("%d", &amount);
            if (balance >= amount) {
                balance = balance - amount;
                printf("You are sending %d to %s\nEnter your PIN to complete the transaction: ", amount, number);
                scanf("%d", &pin);
                goto end;
            break;
        case 2:
            printf("1. Buy for self\n2. Buy for another number\n");
            scanf("%d", &dh);  
            printf("Enter number to send to: ");
            scanf("%s", number);
            printf("Enter amount: ");
            scanf("%d", &amount);
            if (balance >= amount) {
                balance = balance - amount;
                printf("You are sending %d to %s\nEnter your PIN to complete the transaction: ", amount, number);
                scanf("%d", &pin);
                goto end;
            break;
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
    end:
    if (pin == pin1) {
        printf("Transaction completed successfully\n"); 
    } else {
        printf("Incorrect Password, try again\n");
        goto start;
    }

    }
}
