#include <stdio.h>

int roll[50], n;
char name[50][30];
float marks[50];

void input();
void display();

int main() {
input();
display();
 return 0;
}

void input() {
 printf("Enter number of students: ");
 scanf("%d", &n);

 for (int i = 0; i < n; i++) {
 printf("\nEnter roll, name, marks: ");
 scanf("%d %s %f", &roll[i], name[i], &marks[i]);
    }
}

void display() {
printf("\nRoll\tName\tMarks\n");
 for (int i = 0; i < n; i++) {
 printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
}