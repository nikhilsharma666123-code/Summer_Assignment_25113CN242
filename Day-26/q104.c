#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Quiz Application\n");

    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\n2. How many days are there in a week?\n");
    scanf("%d", &answer);

    if (answer == 7)
        score++;

    printf("\nYour Score = %d/2\n", score);

    return 0;
}