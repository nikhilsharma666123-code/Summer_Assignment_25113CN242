#include <stdio.h>

struct Book {
int id;
char name[30];
};

int main() {
struct Book b;
int search;

 printf("Enter Book ID: ");
 scanf("%d", &b.id);

 printf("Enter Book Name: ");
 scanf(" %[^\n]", b.name);

 printf("\nBook Details\n");
 printf("ID   : %d\n", b.id);
 printf("Name : %s\n", b.name);

 printf("\nEnter Book ID to search: ");
 scanf("%d", &search);

 if (search == b.id)
 printf("Book Found: %s\n", b.name);
 else
 printf("Book Not Found\n");

 return 0;
}