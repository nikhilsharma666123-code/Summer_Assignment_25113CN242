#include <stdio.h>

int main() {
    int accNo, choice;
    float balance = 0, amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    while(1) {
     printf("\n--- Bank Menu ---\n");
     printf("1. Deposit\n");
     printf("2. Withdraw\n");
     printf("3. Check Balance\n");
     printf("4. Exit\n");
     printf("Enter choice: ");
     scanf("%d", &choice);

     if(choice == 1) {
     printf("Enter amount to deposit: ");
     scanf("%f", &amount);
     balance += amount;
     printf("Deposited successfully!\n");
     }
     else if(choice == 2) {
     printf("Enter amount to withdraw: ");
     scanf("%f", &amount);
     if(amount <= balance) {
     balance -= amount;
     printf("Withdraw successful!\n");
     } else {
     printf("Insufficient balance!\n");
     }
 }
     else if(choice == 3) {
     printf("Account No: %d\n", accNo);
     printf("Current Balance: %.2f\n", balance);
        }
     else if(choice == 4) {
     printf("Exiting...\n");
     break;
        }
    else {
    printf("Invalid choice!\n");
        }
    }

    return 0;
}