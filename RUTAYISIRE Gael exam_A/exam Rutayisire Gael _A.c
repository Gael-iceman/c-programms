#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to print a 4x4 square of stars
void printSquare() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to print a half square(right triangle) of stars
void printHalfTriangle() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to print Pascal's Triangle of height 4
void printPascalsTriangle() {
    int rows = 4, coef = 1;

    for (int i = 0; i < rows; i++) {
        coef = 1;
        for (int j = 0; j <= i; j++) {
            if (j > 0 && i > 0) {
                coef = coef * (i - j + 1) / j;
            }
            printf("%d ", coef);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    // Main program loop
    do {
        // Prompt the user for input
        printf("Enter your choice: \n(1: Print 4x4 Square of stars\n 2: Print Half square (right triangle) of stars\n 3: Print Pascal's Triangle of height 4\n 0: Exit): ");
        scanf("%d", &choice);

        // Switch statement to handle user choice
        switch (choice) {
            case 1:
                printSquare();
                break;
            case 2:
                printHalfTriangle();
                break;
            case 3:
                printPascalsTriangle();
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}
