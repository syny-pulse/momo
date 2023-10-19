#include <stdio.h>
#include <conio.h>

int main(void) {
    int ch, dh, eh, fh, amount, balance = 5000, pin1 = 2002,pin;
    char number[10];
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
                printf("You are sending %d to %s \n Enter 1 to continue \n",amount,number);
                scanf("%d", eh);
                if(eh == 1) {
                    goto end;
                    break;
                } else {
                    goto start;;
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
    printf("Enter PIN to complete the transaction: ");
    scanf("%d", &pin); 
    if (pin == pin1) {
        printf("Transaction completed successfully\n"); 
    } else {
        printf("Incorrect Password, try again\n");
        goto start;
    }

    }
}
