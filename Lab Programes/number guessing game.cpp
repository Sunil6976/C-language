#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0, maxAttempts = 7;

    // Seed the random number generator
    srand(time(0));
    secret = rand() % 100 + 1;  // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == secret) {
            printf("?? Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess < secret) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    if (guess != secret) {
        printf("\n? You've used all %d attempts. The correct number was: %d\n", maxAttempts, secret);
    }

    return 0;
}
