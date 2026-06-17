#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++);

    for (j = 0, i = i - 1; i >= 0; i--, j++) {
        rev[j] = str[i];
    }

    rev[j] = '\0';

    printf("Reversed string: %s", rev);

    return 0;
}