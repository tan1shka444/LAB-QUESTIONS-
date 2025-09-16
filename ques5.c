#include <stdio.h>

int main() {
    char ch; // Declare a character variable

    // Prompt the user to enter a character
    printf("Enter a character: ");

    // Read the character input from the user
    scanf("%c", &ch);

    // Print the character and its ASCII value
    // When a char is printed with %d, its integer ASCII value is displayed.
    printf("The ASCII value of '%c' is %d.\n", ch, ch);

    return 0; // Indicate successful program execution
}
