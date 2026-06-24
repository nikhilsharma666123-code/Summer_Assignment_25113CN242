#include <stdio.h>

struct Book {
int id;
 char name[20];
};

int main() {
 struct Book b[10];
 int n, i;

 printf("Enter number of books: ");
 scanf("%d", &n);

 for(i = 0; i < n; i++) {
 printf("Enter id and name: ");
 scanf("%d %s", &b[i].id, b[i].name);
 }

 printf("\nBooks List:\n");
 for(i = 0; i < n; i++) {
 printf("%d %s\n", b[i].id, b[i].name);
}

 return 0;
}