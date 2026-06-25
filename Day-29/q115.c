#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], temp;
    int ch, i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if(str[len-1] == '\n') str[len-1] = '\0';

    printf("\n1.Length\n2.Reverse\n3.Uppercase\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch(ch) {
     case 1:
     printf("Length = %d", strlen(str));
     break;

     case 2:
     len = strlen(str);
     for(i = 0; i < len/2; i++) {
     temp = str[i];
     str[i] = str[len-1-i];
     str[len-1-i] = temp;
     }
     printf("Reverse = %s", str);
     break;

     case 3:
     for(i = 0; str[i]; i++)
     str[i] = toupper(str[i]);
     printf("Uppercase = %s", str);
      break;

     default:
     printf("Invalid Choice");
    }

    return 0;
}