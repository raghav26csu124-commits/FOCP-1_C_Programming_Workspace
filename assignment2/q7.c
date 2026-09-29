#include <stdio.h>

int main() {
    int pin, amount;
    int balance = 5000; // Example initial balance

    printf("Enter PIN: ");
    scanf("%d", &pin);

    if (pin == 1234) {
        printf("Enter Amount to withdraw: ");
        scanf("%d", &amount);

        if (amount > 0 && amount % 100 == 0) {
            if (amount <= balance) {
                printf("Withdrawal Successful\n");
            } else {
                printf("Insufficient Balance\n");
            }
        } else {
            printf("Invalid Amount\n");
        }
    } else {
        printf("Invalid PIN\n");
    }

    return 0;
}