#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // Seed for random number generation
    srand(time(NULL));
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the secret number between 1 and 100.\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    } while (guess != secretNumber);
    return 0;
}










