#include <stdio.h>

void decimalToBinary(int decimalNumber) {
    int binary[32];
    int i = 0;

    // Convert decimal to binary
    while (decimalNumber > 0) {
        binary[i] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        i++;
    }

    // Print binary representation in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    // Input
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Check for negative input
    if (decimalNumber < 0) {
        printf("Please enter a non-negative decimal number.\n");
        return 1; // Exit with an error code
    }

    // Call function to convert and print binary representation
    decimalToBinary(decimalNumber);

    return 0; // Exit successfully
}

