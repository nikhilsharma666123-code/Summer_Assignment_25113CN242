#include <stdio.h>

struct Contact {
char name[30];
char phone[15];
};

int main() {
struct Contact c[50];
int n, i;

 printf("How many contacts? ");
 scanf("%d", &n);

    
 for(i = 0; i < n; i++) {
 printf("\nEnter name: ");
 scanf("%s", c[i].name);

 printf("Enter phone: ");
  scanf("%s", c[i].phone);
 }

    
 printf("\n--- Contact List ---\n");
 for(i = 0; i < n; i++) {
 printf("Name: %s | Phone: %s\n", c[i].name, c[i].phone);
 }

 return 0;
}