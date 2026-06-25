#include <stdio.h>

int main() {
    int qty, ch;

    printf("Enter initial stock: ");
    scanf("%d", &qty);

    printf("\n1. Add Stock\n2. Sell Item\n3. View Stock\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch(ch) {
     case 1:
     int add;
     printf("Enter quantity to add: ");
     scanf("%d", &add);
      qty += add;
     printf("Updated Stock = %d", qty);
      break;

     case 2:
     int sell;
     printf("Enter quantity to sell: ");
     scanf("%d", &sell);
     qty -= sell;
     printf("Remaining Stock = %d", qty);
     break;

     case 3:
     printf("Current Stock = %d", qty);
     break;

     default:
     printf("Invalid Choice");
    }

    return 0;
}