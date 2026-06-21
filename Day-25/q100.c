#include <stdio.h>
#include <string.h>

int main() {
    char w[5][20], temp[20];
    int i, j;

    printf("Enter 5 words:\n");
    for(i = 0; i < 5; i++)
        scanf("%s", w[i]);

    for(i = 0; i < 4; i++) {
     for(j = i + 1; j < 5; j++) {
     if(strlen(w[i]) > strlen(w[j])) {
     strcpy(temp, w[i]);
     strcpy(w[i], w[j]);
     strcpy(w[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for(i = 0; i < 5; i++)
        printf("%s\n", w[i]);

    return 0;
}