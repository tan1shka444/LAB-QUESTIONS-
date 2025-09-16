#include <stdio.h>

int main() {
    int num1, num2;
    float result;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform division with type conversion to float
    // Casting one of the operands to float ensures floating-point division
    result = (float)num1 / num2; 

    // Print the result
    printf("Result: %.1f\n", result); 

    return 0;
}
