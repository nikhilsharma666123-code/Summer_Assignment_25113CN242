#include <stdio.h>
#include <string.h>

void compressString(char str[]) {
    int n = strlen(str);
    int count;

    for (int i = 0; i < n; i++) {
        count = 1;

        while (i < n - 1 && str[i] == str[i + 1]) {
         count++;
         i++;
        }

        printf("%c%d", str[i], count);
    }
}

int main() {
char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Compressed string: ");
    compressString(str);

    return 0;
}