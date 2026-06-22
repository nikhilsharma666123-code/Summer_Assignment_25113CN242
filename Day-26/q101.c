#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(0));

    // Generate random number betweeen 1 and 100
    number = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("\nCongratulations! You guessed the number %d.\n", number);
            printf("Total attempts: %d\n", attempts);
        }

    } while (guess != number);

    return 0;
}