#include <stdio.h>

int main() {
    int choice;
    float balance = 5000, amount;

    printf("1. Check Balance\n2. Deposit\n3. Withdraw\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Balance = %.2f", balance);
    }
    else if (choice == 2) {
        printf("Enter amount: ");
        scanf("%f", &amount);
        balance += amount;
        printf("New Balance = %.2f", balance);
    }
    else if (choice == 3) {
        printf("Enter amount: ");
        scanf("%f", &amount);

        if (amount <= balance) {
            balance -= amount;
            printf("New Balance = %.2f", balance);
        } else {
            printf("Insufficient Balance");
        }
    }
    else {
        printf("Invalid Choice");
    }

    return 0;
}