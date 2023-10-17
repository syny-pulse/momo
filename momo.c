#include <stdio.h>
#include <conio.h>

int main(void) {
    int ch, dh, eh, fh, number, amount, balance = 5000, pin1 = 2002,pin;
    printf("Welcome to Pulse MoMo. \nSelect option\n");
    start:
    printf("1. Send Money \n2. Buy Airtime/Bundles \n3.Withdraw Cash \n4. Payments \n5.Financial Services \n6. Savings and loans \n7. School fees \n8. My Account\n");
    scanf("%d", &ch);
    switch(ch) {
        case 1:
            printf("1. Send to Airtel \n2. Send to other network\n");
            scanf("%d", dh);
            printf("Enter number to send to \n");
            scanf("%s", &number);
            printf("Enter amount \n");
            scanf("%d", &amount);
            if(balance >= amount) {
                balance = balance - amount;
                printf("You are sending %d",amount);
                printf(" to %s, press 1 to continue",number);
                scanf("%d", fh);
                if (fh == 1) {
                        goto end;
                        }
                    } else {
                        printf("Insufficient balance, load MoMo to continue\n");
                        goto start;
                    }
        case 2:
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
    printf("Enter PIN to complete transaction");
    scanf("%d", pin);
    if (pin == pin1) {
        printf("Transaction completed successfully");
    } else {
        printf("Incorrect Password, try again");
        goto start;
    }


    }
}
