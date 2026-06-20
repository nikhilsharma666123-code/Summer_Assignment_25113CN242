#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50], temp[100];

    scanf("%s %s", s1, s2);

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strlen(s1) == strlen(s2) && strstr(temp, s2))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}