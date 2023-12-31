#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printRandomFiveDigits(int count) {
    for (int i = 0; i < count; i++) {
        int randomNum = rand() % 90000 + 10000;  
        printf("%d\n", randomNum);
    }
}

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
            } else {
                printf("Insufficient balance, load money to continue");
                goto start;
            }
            break;
        case 2:
            printf("1. Buy for self\n2. Buy for another number\n");
            scanf("%d", &dh);
            switch(dh) {
                case 1:
                    printf("Enter airtime amount: ");
                    scanf("%d", &amount);
                    if (balance >= amount) {
                    balance = balance - amount;
                    printf("You are buying airtime of %d \nEnter your PIN to complete the transaction: ", amount);
                    scanf("%d", &pin);
                    goto end;
                    } else {
                    printf("Insufficient balance, load money to continue");
                    goto start;
                    }
                    break;
                case 2:
                    printf("Enter number to buy airtime for: ");
                    scanf("%s", number);
                    printf("Enter airtime amount: ");
                    scanf("%d", &amount);
                    if (balance >= amount) {
                        balance = balance - amount;
                        printf("You are buying airtime worth %d for %s\nEnter your PIN to complete the transaction: ", amount, number);
                        scanf("%d", &pin);
                        goto end;
                    } else {
                    printf("Insufficient balance, load money to continue");
                    goto start;
            }
                    break;

            }  
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if (balance > amount) {
                printf("Enter PIN to complete transaction: ");
                scanf("%d", &pin);
                if(pin == pin1) {
                    printf("Transaction successful, your secret code is \n");
                    srand(time(NULL));
                    printRandomFiveDigits(1);
                }
            } else {
                printf("Insufficient balance! Enter a less amount\n");
                goto start;
            }
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
