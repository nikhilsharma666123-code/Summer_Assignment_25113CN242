#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp;
    int i, j;

    scanf("%s %s", s1, s2);

    for(i=0; s1[i]; i++)
     for(j=i+1; s1[j]; j++)
     if(s1[i] > s1[j]) {
     temp = s1[i]; s1[i] = s1[j]; s1[j] = temp;
            }

    for(i=0; s2[i]; i++)
     for(j=i+1; s2[j]; j++)
     if(s2[i] > s2[j]) {
     temp = s2[i]; s2[i] = s2[j]; s2[j] = temp;
            }

    if(strcmp(s1, s2) == 0)
     printf("Anagram");
    else
     printf("Not Anagram");

    return 0;
}