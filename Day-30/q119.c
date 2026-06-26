#include <stdio.h>

struct Employee {
int id;
char name[30];
float salary;
};

int main() {
 struct Employee e;
 int search;

 printf("Enter Employee ID: ");
 scanf("%d", &e.id);

 printf("Enter Employee Name: ");
 scanf(" %[^\n]", e.name);

 printf("Enter Salary: ");
 scanf("%f", &e.salary);

 printf("\nEmployee Details\n");
 printf("ID: %d\n", e.id);
 printf("Name: %s\n", e.name);
 printf("Salary: %.2f\n", e.salary);

 printf("\nEnter Employee ID to Search: ");
 scanf("%d", &search);

if (search == e.id)
 printf("Employee Found: %s, Salary = %.2f\n", e.name, e.salary);
 else
 printf("Employee Not Found\n");

 return 0;
}