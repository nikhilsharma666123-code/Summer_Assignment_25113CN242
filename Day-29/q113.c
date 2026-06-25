#include <stdio.h>

int main() {
    int ch, a, b;

    printf("1.Add\n2.Sub\n3.Mul\n4.Div\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    switch(ch) {
        case 1: printf("Result = %d", a + b); break;
        case 2: printf("Result = %d", a - b); break;
        case 3: printf("Result = %d", a * b); break;
        case 4: printf("Result = %d", a / b); break;
        default: printf("Invalid Choice");
    }

    return 0;
}