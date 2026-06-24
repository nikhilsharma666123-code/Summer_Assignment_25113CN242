#include <stdio.h>

int main() {
    int empId;
    char name[20];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("\n--- Salary Details ---\n");
    printf("Employee ID: %d\n", empId);
    printf("Employee Name: %s\n", name);
    printf("Salary: %.2f\n", salary);

    return 0;
}