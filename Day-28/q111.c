#include <stdio.h>

int main() {
    int totalTickets = 10;
    int booked = 0;
    int choice, n;

    while(1) {
     printf("\n--- Ticket Booking System ---\n");
     printf("1. Book Ticket\n");
     printf("2. View Status\n");
     printf("3. Exit\n");
     printf("Enter choice: ");
     scanf("%d", &choice);

     if(choice == 1) {
     printf("How many tickets do you want to book? ");
     scanf("%d", &n);

     if(n <= (totalTickets - booked)) {
     booked += n;
     printf("Tickets booked successfully!\n");
     } else {
     printf("Not enough tickets available!\n");
      }
     }
     else if(choice == 2) {
     printf("Total Tickets: %d\n", totalTickets);
     printf("Booked Tickets: %d\n", booked);
     printf("Available Tickets: %d\n", totalTickets - booked);
 }
     else if(choice == 3) {
     printf("Exiting...\n");
     break;
        }
     else {
     printf("Invalid choice!\n");
        }
    }

    return 0;
}