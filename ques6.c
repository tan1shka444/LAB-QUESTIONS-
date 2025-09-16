#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check for negative input (optional, but good practice)
    if (number < 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    // Use a while loop to extract digits and calculate their sum
    while (number > 0) {
        digit = number % 10; // Get the last digit
        sum += digit;        // Add the digit to the sum
        number /= 10;        // Remove the last digit from the number
    }

    // Print the sum of the digits
    printf("Sum of the digits: %d\n", sum);

    return 0; // Indicate successful execution
}
